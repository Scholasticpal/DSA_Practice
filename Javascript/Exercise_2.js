// EXERCISE 2

/* Use Javascript to create a game of Rock Paper Scissors. The game should ask you to enter R, P or S. The computer should be able to randomly generate R, P, or S and declare win or loss using alert. Use confirm and prompt wherever required. */

const RockPaperScissorsGame = (input, scoreArr) => {
  let num = Math.floor(Math.random() * 3);
  let compInput;
  if (num == 0) {
    compInput = "R";
  } else if (num == 1) {
    compInput = "P";
  } else {
    compInput = "S";
  }

  if (compInput == input) {
    scoreArr.push(0);
    alert("Draw");
  } else if (compInput == "R") {
    if (input == "S") {
      alert("You lose! Rock beats Scissors");
      scoreArr.push(-1);
    } else {
      alert("You win! Paper beats Rock");
      scoreArr.push(1);
    }
  } else if (compInput == "P") {
    if (input == "S") {
      alert("You win! Scissors beat Paper");
      scoreArr.push(1);
    } else {
      alert("You lose! Paper beats Rock");
      scoreArr.push(-1);
    }
  } else {
    if (input == "R") {
      alert("You win! Rock beats Scissors");
      scoreArr.push(1);
    } else {
      alert("You lose! Scissors breat Paper");
      scoreArr.push(-1);
    }
  }
};

// const prompt = require("prompt-sync")();
let userPlay = true;
let scoreArr = [];
while (userPlay) {
  let input = prompt("Enter R/ P/ S");
  if (!input) continue;
  input = input.toUpperCase();
  if (input != "R" && input != "P" && input != "S") {
    alert("Enter valid input");
    continue;
  }
  RockPaperScissorsGame(input, scoreArr);
  userPlay = confirm("Do you want to continue?");
}
console.log("Your Results: ");
console.table(scoreArr);
