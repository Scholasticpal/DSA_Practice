let age = 10;

if (age > 10 && age < 20) {
  console.log("Age lies between 10 and 20");
} else {
  console.log("Nope.");
}

let age2 = 18;

switch (true) {
  case age2 < 18 && age2 > 0: {
    console.log("smaller than 18");
    break;
  }
  case age2 >= 18 && age2 < 60: {
    console.log("Valid to drive without renewal");
    break;
  }
  case age2 >= 60: {
    console.log("Please renew your license");
    break;
  }
  default:
    console.log("Invalid age");
}

let a = 26;

if (a % 3 == 0 && a % 2 == 0) {
  console.log("num is divisible by 3 AND 2");
} else {
  console.log("Nope.");
}

if (a % 3 == 0 || a % 2 == 0) {
  console.log("num is divisible by 3 OR 2");
} else {
  console.log("Nope.");
}

let driverAge = 19;

console.log(driverAge >= 18 ? "you may drive" : "youcannot drive");
