// example of promise chaining

let p1 = new Promise((resolve, reject) => {
  setTimeout(() => {
    console.log("resolve after 2 sec");
    resolve(true);
  }, 2000);
});

p1.then((value) => {
  console.log(value);
  let p2 = new Promise((resolve, reject) => {
    setTimeout(() => {
      reject("NOPE THIS WILL FAIL");
    }, 2000);
  });
  return p2;
})
  .catch((error) => {
    console.log("We are done:", error);
    return 9;
  })
  .then((value) => {
    console.log("Now we have value as 9");
  });

  
/*
Mental model of promise chaining

.then()
resolve(value) OR
return value
        ↓
    .then()

-------------------------------------------
.catch()
reject(error) OR
throw error
        ↓
    .catch()
*/
