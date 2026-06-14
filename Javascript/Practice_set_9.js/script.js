// Practice Set 9
/*
1. Write a program to load a JavaScript file in a browser using Promises. Use .then() to display an alert when the load is complete.  

2. Write the same program from previous question and use async / await syntax.  

3. Create a promise which rejects after 3 seconds. Use an async / await to get its value. Use a try catch to handle its error.  

4. Write a program using Promise.all() inside an async / await to await 3 promises. Compare its results with the case where we await these promises one by one.*/

//A1.
const p1 = (src) => {
  return new Promise((resolve, reject) => {
    let myscript = document.createElement("script");
    myscript.src = src;
    document.body.append(myscript);
    myscript.onload = () => {
      resolve(true);
    };
    myscript.onerror = () => {
      reject(new Error("Script load failed"));
    };
  });
};

p1("assume a valid src .js file here")
  .then(alert)
  .catch((error) => {
    console.error(error);
  });

//A2.

let loadScript = (src) => {
  return new Promise((resolve, reject) => {
    let myscript = document.createElement("script");
    myscript.src = src;
    myscript.onload = () => {
      resolve(true);
    };
    myscript.onerror = () => {
      reject();
    };
  });
};

const p1 = async () => {
  return await loadScript("a valid src .js");
};
p1().then(alert);

//A3
// 1. Create the promise that rejects after 3 seconds
const rejectAfter3Secs = () => {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      reject(new Error("YOU HAVE BEEN REJECTED HAHAHA"));
    }, 3000);
  });
};

// 2. Use async/await and try/catch to handle it
const handleRejection = async () => {
  try {
    await rejectAfter3Secs();
  } catch (err) {
    console.log("Caught the error:", err.message);
  }
};

handleRejection();

//A4
// case 1
// A helper function to create a promise that resolves after a delay
const createPromise = (msg, delay) => {
  return new Promise((resolve) => {
    setTimeout(() => {
      resolve(msg);
    }, delay);
  });
};

// ==========================================
// CASE 1: Promise.all() (Runs in PARALLEL)
// ==========================================
const func1 = async () => {
  console.time("Case 1 (Promise.all)");

  let p1 = createPromise("check 1", 1000); // Takes 1 second
  let p2 = createPromise("check 2", 1000); // Takes 1 second
  let p3 = createPromise("check 3", 1000); // Takes 1 second

  // All three promises start executing at the SAME time.
  const results = await Promise.all([p1, p2, p3]);

  console.log("Case 1 Results:", results);
  // Total time will be roughly 1 second total
  console.timeEnd("Case 1 (Promise.all)");
};

// ==========================================
// CASE 2: Awaiting One-by-One (Runs in SEQUENCE)
// ==========================================
const func2 = async () => {
  console.time("Case 2 (One-by-One)");

  // p2 will not even start executing until p1 completely finishes!
  let r1 = await createPromise("check 1", 1000);
  let r2 = await createPromise("check 2", 1000);
  let r3 = await createPromise("check 3", 1000);

  console.log("Case 2 Results:", [r1, r2, r3]);
  // Total time will be roughly 3 seconds total (1 + 1 + 1)
  console.timeEnd("Case 2 (One-by-One)");
};

// Run both to compare
const runAll = async () => {
  await func1();
  console.log("--------------------------------");
  await func2();
};

runAll();
