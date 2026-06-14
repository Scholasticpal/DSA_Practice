const pokeInput = document.getElementById("pokeInput");
const pokeForm = document.getElementById("pokeForm");

let searchPokemon = async (e) => {
  try {
    e.preventDefault();
    let val = pokeInput.value;
    val = val.toLowerCase();
    let response = await fetch(`https://pokeapi.co/api/v2/pokemon/${val}`);
    response = await response.json();
    await populate(response);
  } catch (err) {
    console.log("Unable to load pokemon, change input");
  }
};

let populate = async (src) => {
  try {
    let img = document.getElementById("pokeImg");
    let name = document.getElementById("pokeName");
    name.innerHTML = src.species.name;
    img.src = src.sprites.front_default;

    const statsBody = document.getElementById("pokeStatsBody");
    statsBody.innerHTML = "";

    src.stats.forEach((item, index) => {
      let row = statsBody.insertRow();

      let cellIndex = row.insertCell(0);
      let cellName = row.insertCell(1);
      let cellStat = row.insertCell(2);

      cellIndex.textContent = index + 1;
      cellName.textContent = item.stat.name;
      cellStat.textContent = item.base_stat;
    });

    const type = document.getElementById("pokeType");
    type.innerHTML = src.types[0].type.name;
  } catch (err) {
    console.error(err);
  }
};

pokeForm.addEventListener("submit", searchPokemon);
