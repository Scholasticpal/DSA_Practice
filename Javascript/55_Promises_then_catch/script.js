let p = new Promise((resolve, reject) => {
  console.log("i am inside promise execution");
  setTimeout(() => {
    console.log("Promise is fulfilled");
    // resolve(true);
    // reject(new Error("There was an Error doopidity"));
    reject("Theres no mail");
  }, 2000);
});

console.log(p);
setTimeout(() => {
  console.log("console log this u dummy: ", p);
}, 2500);
