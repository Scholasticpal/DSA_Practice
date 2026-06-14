// Practice Set 8

/*Q1. Write a program to show different alerts when different buttons are clicked
Q2. Create a website which is capable of storing bookmarks of your favourite websites using href
Q3. Repeate Q2 using event listeners
Q4. Write a JS program to keep fetching contents of a website (every 5 seconds)
Q5. Create a glowing bulb effect using classlist together in js
*/

// let bookmark = document.getElementById("button4");
// let f1 = (e) => {
//   window.location = "https://www.google.com";
// };

// bookmark.addEventListener("click", f1);

// let pokearray = [];

// const fetchPokemon = async () => {
//   let response = await fetch("https://pokeapi.co/api/v2/pokemon?limit=100");

//   response = await response.json();
//   pokearray = Array.from(response.results);
//   console.log(pokearray);
// };

// fetchPokemon();

// let callpokemon = setInterval(() => {
//   let i = Math.floor(Math.random() * 100); //0 to 99
//   document.getElementById("pokediv").innerHTML += pokearray[i].name + "<br>";
// }, 1000);

// document.getElementById("button4").addEventListener("click", callpokemon);

let toggleBulb = () => {
  document.getElementsByClassName("bulb-container")[0].classList.toggle("bulb");
};

BulbFunction = () => {
  document.getElementById("button5").onclick = toggleBulb;
};
BulbFunction();
