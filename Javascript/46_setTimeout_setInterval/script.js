// let a = setTimeout(() => {
//   document.write("Hello2");
// }, 2000);

// let b = setTimeout(() => {
//   document.write("Hello2");
// }, 2000);

// console.log(a); //-> this outputs 1 ie timer id
// console.log(b);

// Q1. whats up with timer id in settimeout i see 1 with a single function, but 5 and 6 when i added two of same function?
// Q2. are settimout timer ids shown when i do cleartimeout before it runs?
// Q3. why do we even have this timerid?
// Q4. is settimeout n setinterval hooks?

// let i = 0,
//   a = 0,
//   b = 0;
// setInterval(
//   (a, b) => {
//     i++;
//     document.write("Testing no. ", i, " value being ", a + b);
//     a++;
//     b++;
//   },
//   1000,
//   a,
//   b,
// );

let i = 0;
let x = 0;
let y = 0;
let m = setInterval(
  (a, b) => {
    i++;
    x++;
    y++;

    document.write(
      "Testing no. ",
      i,
      " value being ",
      a + b,
      `but not ${x + y}`,
      "<br>",
    );

    if (i >= 5) {
      clearInterval(m);
      document.write("Interval cleared!");
    }
  },
  1000,
  x,
  y,
);