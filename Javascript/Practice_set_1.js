// Q1 - Create a variable of type string and try to add a number to it.

let greet = "Hello agent";
let num = 47;
let sentence = greet + num;
// console.log(sentence);

// Q2 - use type of operator to find type of variable in prev question
// console.log(typeof(sentence));

// Q3 -create a const object and can u change it to number later?
const employee = {
  name: "anmol",
  id: 1234,
};

// employee = 4 //error here cant assign to const

// Q4 - try to add a new key to object in problem 3. can u do it?
employee.age = 47;
employee["age"] = 24;

// console.log(employee);

// Q5. write a js progream to create a word meaning dictionary of 2 words.

const dict = {
  yakka: "hard work",
  appreciate: "recognize the full worth of",
};
