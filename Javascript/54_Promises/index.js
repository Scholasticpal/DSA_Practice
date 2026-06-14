/* Promises are solution to callback hell and inversion of control.
    Simply put, its a promise of code execution and the code either executes or failes, in both cases the subscriber is notified.
*/

let promise = new Promise((resolve, reject) => {
  resolve(999);
});

console.log("Hello One");
setTimeout(() => {
  console.log("Hello Two in 2 seconds");
}, 2000);

console.log("my name is " + "Hello Three");
console.log(promise);
