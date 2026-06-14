// a.onclick = () => {
//   console.log("div considered script.js");
// };
let a = document.getElementsByTagName("button");
let i = 0;

let f1 = (e) => {
  document.getElementById("box1").innerHTML += "button1 works <br/>";
  i++;
  if (i > 5) {
    a[0].removeEventListener("click", f1);
  }
};

let f2 = (e) => {
  document.getElementById("box2").innerHTML += "button2 works <br/>";
  if (i > 5) {
    a[1].removeEventListener("click", f2);
  }
};

a[0].addEventListener("click", f1);
a[1].addEventListener("click", f2);
