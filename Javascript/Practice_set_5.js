//Practice Set 5

// Q1 - Create an array of numbers and take input from the user to add numbers to this array
// Q2 - Keep adding numbers to the array in 1 until 0 is added to the array
// Q3 - Filter for numbers divisible by 10 from a given array
// Q4 - Create an array of square of given numbers
// Q5 - Use reduce to calculate factorial of a given number from an array of first n natural numbers
// (n being the number whose factorial needs to be calculated)

// A1
const prompt = require("prompt-sync")();
const arr = [];
let num = prompt("Enter a number 1:");
num = Number.parseInt(num);
arr.push(num);
num = prompt("Enter number 2:");
num = Number.parseInt(num);
arr.push(num);
console.log(arr);

// A2
const prompt = require("prompt-sync")();
let arr = [],
  num = 1;
while (num != 0) {
  num = prompt("Enter a number: ");
  num = Number.parseInt(num);
  arr.push(num);
}
console.log(arr);

A3
const func = () => {
    let arr = [11, 289, 20, 800, 8080, 43, 975]

    let newArr = arr.filter((num)=>{
        return (num%10==0)
    })

    console.log(newArr)
}
func()

// A4
let myarr = [1, 2, 3, 4, 5];
const calcSquares = (arr) => {
  let newArr = arr.map((num) => {
    return num * num;
  });
  console.log(newArr);
};
calcSquares(myarr);

// A5
const prompt = require("prompt-sync")();
let num = prompt("Enter a positive number to calc factorial: ");
num = Number.parseInt(num);
let arr = [],
  i = 1;
while (arr.length != num) {
  arr.push(i++);
}
console.log(arr);

const calcFactorial = (arr) => {
  const ans = arr.reduce((acc, curr) => {
    return acc * curr;
  });
  return ans;
};
console.log(calcFactorial(arr));
