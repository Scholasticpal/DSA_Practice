// console.log(first.getAttribute("class"));
// console.log(first.hasAttribute("hidden"));
// first.setAttribute("hidden", "true");
// first.setAttribute("class", "abc xyz");
// console.log(first.getAttribute("class"));
// first.setAttribute("hidden", "false");
// first.removeAttribute("hidden");

// console.log(first.dataset["game"]);

let a = document.getElementsByTagName("div")[0];
console.log(a);
a.innerHTML += "<p>Whats up kya haal chaal?</p>";
let div = document.createElement("div");
div.innerHTML = "<h1>Hello, World!</h1>";


a.innerHTML = "";
a.outerHTML = "<h1>Outer Hello, World!</h1>";

a.appendChild(div);
a.append(div)
a.prepend(div);
a.before(div);
a.after(div);
a.replaceWith(div);
a.remove();
a.contains(div);

a.insertAdjacentHTML("beforebegin", "<p>Before Begin</p>");
a.insertAdjacentHTML("afterbegin", "<p>After Begin</p>");
a.insertAdjacentHTML("beforeend", "<p>Before End</p>");
a.insertAdjacentHTML("afterend", "<p>After End</p>");

a.insertAdjacentElement("beforebegin", div);
a.insertAdjacentElement("afterbegin", div);
a.insertAdjacentElement("beforeend", div);
a.insertAdjacentElement("afterend", div);

a.classList.add("abc");
a.classList.remove("abc");
a.classList.toggle("abc");
a.classList.toggle("abc");
a.classList.contains("abc");
a.className = "xyz";

