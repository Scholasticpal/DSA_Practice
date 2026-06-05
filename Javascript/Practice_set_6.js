// Q1. Write a program using prompt funtion to take input of age as a value from the user and use alert to tell him if he can drive
// Q2. In Q1 use confirm to ask the user if he wants to see the prompt again
// Q3. In the previous question use console.error to log the error if the age entered is negative.
// Q4. Write a program to change the url to google.com (redirection) if user enteres a number greater than 4
// Q5. Change the background of the page to yellow, red or any other color based on user input through prompt

// A1
// let prompt = require("prompt-sync")();
// let age = prompt("Enter age: ");
// age = Number.parseInt(age);
// if (age < 18 && age > 0) {
//   alert("You cannot drive");
// } else if (age > 18) {
//   alert("You can drive!");
// } else {
//   alert("Not a valid age.");
// }

// A2
// const prompt = require("prompt-sync")();
// let seePrompt = true;

// while (seePrompt) {
//   let age = prompt("Enter age: ");
//   age = Number.parseInt(age);
//   if (age < 18 && age > 0) {
//     alert("You cannot drive");
//   } else if (age > 18) {
//     alert("You can drive!");
//   } else {
//     alert("Not a valid age.");
//   }
//   seePrompt = confirm("Do you want to see the prompt again?");
// }

//A3
// const prompt = require("prompt-sync")();
// let seePrompt = true;

// while (seePrompt) {
//   let age = prompt("Enter age: ");
//   age = Number.parseInt(age);
//   if (age < 18 && age > 0) {
//     alert("You cannot drive");
//   } else if (age >= 18) {
//     alert("You can drive!");
//   } else {
//     const msg = "Not a valid age";
//     alert(msg);
//     console.error("Not a valid age.");
//   }
//   seePrompt = confirm("Do you want to see the prompt again?");
// }

// A4
// while (true) {
//   let num = prompt("Enter number: ");
//   num = Number.parseInt(num);

//   if (num > 4) {
//     location.href = "https://www.google.com";
//     break;
//   } else {
//     continue;
//   }
// }


// A5
let val = prompt("Enter color")
document.body.style.background = val