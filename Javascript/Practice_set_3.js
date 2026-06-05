// Write a program to print the marks of a student in an object using for loop.

// obj = { harry: 98, rohan: 70, aakash: 7 };
// const keys = Object.keys(obj); //[harry, rohan, aakash]
// console.log(keys)

// for (let i = 0; i < keys.length; i++) {
//   console.log(keys[i] + " : " + obj[keys[i]]);
// }

// Write the program in Q1 using for in loop

// for(it in obj){
//     console.log(it + " : " + obj[it]);
// }

// Write a program to print "try again" until the user enters the correct number

// let num = prompt("Enter num > 5");

// while (num < 5) {
//   num = prompt("Incorrect number, try again");
// }
// console.log("Correct number Entered");

// Write a function to find the mean of 5 numbers.

const meanFunc = (a, b, c, d, e) => {
  return ((a + b + c + d + e) / 5);
};

console.log(meanFunc(1, 2, 3, 4, 5));
