// Array Methods

let num = [1, 2, 3, 34, 99];
let b = num.toString();
console.log(b, typeof b);
let c = num.join("");
console.log(c, typeof c);

let r = num.pop(); // removes element from end of array | returns element
console.log(num, r);
r = num.push("3"); // adds element to end of array | returns new length
console.log(num, r);

r = num.shift(); // removes element from start of array | returns element
console.log(num, r);
r = num.unshift(22);
console.log(num, r); // adds element to start of array | returns new length
