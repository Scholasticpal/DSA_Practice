let p1 = new Promise((resolve, reject) => {
  setTimeout(() => {
    resolve("value 1");
    console.log("p1 resolved");
  }, 1000);
});

let p2 = new Promise((resolve, reject) => {
  setTimeout(() => {
    reject("value 2");
    console.log("p2 rejected");
  }, 2000);
});

let p3 = new Promise((resolve, reject) => {
  setTimeout(() => {
    reject("value 3");
    console.log("p3 rejected");
  }, 3000);
});

let promise_all = Promise.all([p1, p2, p3]);
promise_all.then(
  (value) => {
    console.log("resolved: ", value);
  },
  (value) => {
    console.log("caught: ", value);
  },
);

try {
  anmol;
} catch (error) {
  console.log(error.name);
  console.log(error.message);
}
