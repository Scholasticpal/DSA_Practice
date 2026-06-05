// Q1. Output of console.log("harry\"".length) 
// ans - 5

// Q2. Explore the includes, startswith, and endsWith functions of a string
let str = "anmol"
console.log(str.includes("nm"))
console.log(str.startsWith("s"))
console.log(str.endsWith("l"))


// Q3 - Write a program to convert a given string into lowercase
let str2 = "anmol"
console.log(str2.toLowerCase())

// Q4 - Extract the amount out of this string
// "Please give Rs 1000"
let str3 = "Please give Rs 1000"
let valStr = str3.slice(15)
let num = Number.parseInt(valStr)
console.log(num, "of type:", typeof(num))

// Q5 - Try to change 4th character of a given string. were you able to change it?
// no since its immutable
let str4 = "testing"
str4[3] = 'M'
console.log(str4)
str5 = str4.slice()
console.log(str5)