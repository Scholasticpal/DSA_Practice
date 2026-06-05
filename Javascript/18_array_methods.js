// ARRAY METHODS

// delete------------------------------------
// Delete is not a method, its an operator
let num = [1, 2, 3, 4, 5, 6];
let r = delete num[0];
console.log(num, r, num.length); // len remains same on deletion

//concat ------------------------------------
let newArr = num.concat(num); // doesnt change original arr
console.log(newArr);

// sort -----------------------------------
num.sort();
// Sort converts number to string and alphabetically(lexicographically) sort things
// changes original array itself
// Deleted item spact goes to last.
console.log(num);

let compare = (a, b) => {
  return b - a;
};
console.log(num.sort(compare));

// reverse ----------------------------------
num.reverse();
console.log(num);

//splice ------------------------------------
let num2 = [1, 2, 3];
let r = num2.splice(2, 4); // returns deleted values in r
console.log(num2, r);
[1, 2][3];
console.log(num2 + r);
(1, 23);

// slice -----------------------------------
let num3 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
let newNum = num3.slice(3);
console.log(newNum);
