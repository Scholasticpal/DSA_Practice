//Element Navigation/ Manipulation using JS
// const changeBgRed = () => {
//   document.body.firstElementChild.style.backgroundColor = "red";
// };

// let b = document.body;
// console.log("First child of b is: ", b.firstChild);
// console.log("First child of b is: ", b.firstElementChild);
// changeBgRed();

//Table Navigation/ Manipulation using JS
// let t = document.body.firstElementChild.firstElementChild;
// console.log(t);
// console.log(t.rows);
// console.log(t.tHead);
// console.log(t.caption);
// console.log(t.tBodies);
// console.log(t.tFoot);
// console.log(t.rows[1].rowIndex);
// console.log(t.rows[1].firstElementChild.nextElementSibling.cellIndex);


// matches, closest, contains
// elemA.matches(css) -> checks for css of elemA | returns: boolean
// elemA.closest(css) -> checks for css of elemA and above/parents only | return element if found else null
// elemA.contains(elemB) -> checks if elemA contains elemB | returns: boolean
// example:
// let d1 = document.querySelector(".tablediv");
// let t1 = document.querySelector(".tablemain");

// console.log(t1);
// console.log(t1.contains(d1));