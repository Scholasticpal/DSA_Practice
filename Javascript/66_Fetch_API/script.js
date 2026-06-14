// Fetch API
// AJAX -> Asynchronous, Javascript and XML
let p = fetch("https://pokeapi.co/api/v2/pokemon/ditto", {
  headers: {
    Authorization: "Secret Key",
  },
});

p.then((response) => {
  console.log(response.status);
  console.log(response.ok);
  console.log(response.headers);
  console.log("--- Printing All Headers ---");
  for (let [key, value] of response.headers.entries()) {
    console.log(`${key}: ${value}`);
  }
  return response.json();
}).then((val) => {
  console.log(val);
});
