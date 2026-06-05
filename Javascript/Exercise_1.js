// Exercise 1 - Guess the Number
/*
Write a JavaScript program to generate a random number and store it in a variable. The program then takes an input from the user to tell them whether the guess was correct, greater or lesser than the original number.
100 - (no of guesses) is the score of the user. The program is expected to terminate once the number is guessed. Number should be between 1 - 100. */
// --------------------------------------------------------------------------------------------------------------

const prompt = require("prompt-sync")();

const GuessNum = () => {
  let trueVal = Math.floor(Math.random() * 100) + 1;
  let guessVal = 101,
    count = 0;
  while (true) {
    guessVal = prompt("Guess the value of number (num is between 1-100): ");
    guessVal = Number.parseInt(guessVal);
    if (!Number.isInteger(guessVal) || guessVal < 1 || guessVal > 100) {
      console.log("Enter integer between 1-100 only.");
      console.log("Try again.");
      continue;
    }

    count++;

    if (guessVal == trueVal) {
      console.log("correct!");
      return 100 - count;
    } else if (guessVal > trueVal) {
      console.log("Guess is greater than original number");
    } else {
      console.log("Guess is lesser than original number");
    }
  }
};
let score = GuessNum();
console.log("Your score is: " + score);
