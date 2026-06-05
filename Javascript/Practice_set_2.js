// Practice set 2

// Q1 - Use Logical operators to find if age of a person is between 10 and 20

let age = 14;
if (age > 10 && age < 20) {
  console.log("Age is between 10 and 20");
} else {
  console.log("TEST FAILED");
}

// Q2 - Demonstrate the use of switch case statement in js

let age = 20;

switch (true) {
  case 0 < age && age < 18: {
    console.log("You cannot drive");
    break;
  }
  case 18 <= age: {
    console.log("You can drive");
    break;
  }
  default: {
    console.log("Invalid Age");
  }
}

// Q3 - Write a js program to find whether a number is divisible by 2 and 3

let num = 24;

if (num % 3 == 0 && num % 2 == 0) {
  console.log("valid num");
} else {
  console.log("invalid num");
}

// Q4 - Print "You can drive" or "You cannot drive" based on the age being greater than 18 using ternary operator
let age2 = 19;
console.log(age2 >= 18 ? "You can drive" : "You cannot drive");
