/* Q1. Create a navbar and change the color of its first element to red

Q2. Create a table wihout tbody. now use "View page source" button to check whether it has a tbody or not

Q3. Create an element with 3 children. Now change the color of first and last element to green

Q4. Write a javascript code to change background of all <li> tags to cyan

Q5. Which of the following is used to look for farthest ancestor that matches a given css selector
    a) matches b) closest c) contains d) none of the above
*/

document.getElementById("navbar").firstElementChild.style.backgroundColor =
  "red";

document.getElementById(
  "navbar",
).firstElementChild.firstElementChild.style.backgroundColor = "green";

document.getElementById(
  "navbar",
).firstElementChild.lastElementChild.style.backgroundColor = "green";

const func = () => {
  let sizeArr = document.getElementsByTagName("li").length;
  for (let i = 0; i < sizeArr; i++) {
    document.getElementsByTagName("li")[i].style.backgroundColor = "cyan";
  }
};
func();

const func2 = () => {
  let listItems = document.querySelectorAll("li");

  listItems.forEach((li) => {
    li.style.backgroundColor = "yellow";
  });
};
func2();
