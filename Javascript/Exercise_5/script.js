// EXERCISE 5
/*
Write a javascript program to pretend to look like a hacker. Write an async function which will simply display the following output:

Initializing Hack program...

Hacking Ashish's username...

Username found aashish17...

Connecting to facebook...

Try to use HTML & styling if possible
*/

const msgdelay = (msg, delay) => {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      console.log(msg);
      resolve(true);
    }, delay);
  });
};
const func = async (arr) => {
  for (let i = 0; i < arr.length; i++) {
    await msgdelay(arr[i], 1500);
  }
};

let arr = [
  "Initializing Hack program...",
  "Hacking Ashish's username...",
  "Username found aashish17...",
  "Connecting to facebook...",
];
func(arr);
