// EXERCISE 3
/* elem.innerHTML is used to populate a div with HTML. Search online about this method and create a website with
a div tag containing a random joke, given an array of jokes. Use Math.random() and fetch jokes from the internet.
(Use any website to create the array). Your website should show a random joke on every reload Max length of your
jokes array should be 10.
*/

const jokesArr = [
  "Why don't scientists trust atoms? Because they make up everything!",
  "Why did the bicycle fall over? Because it was two-tired!",
  "Why did the scarecrow win an award? Because he was outstanding in his field!",
  "Why don't skeletons fight each other? They don't have the guts!",
  "Why did the tomato turn red? Because it saw the salad dressing!",
  "Why did the math book look sad? Because it had too many problems!",
  "Why did the coffee file a police report? It got mugged!",
  "Why did the cookie go to the doctor? Because it was feeling crumbly!",
  "Why did the computer go to the doctor? Because it had a virus!",
  "Why did the golfer bring two pairs of pants? In case he got a hole in one!",
];

const shareJoke = () => {
  let i = Math.floor(Math.random() * 10);
  document.getElementById("joke").innerHTML = jokesArr[i];
};
shareJoke();

const shareOnlineJoke = async () => {
  let jokes = await fetch("https://official-joke-api.appspot.com/random_joke");
  jokes = await jokes.json();

  document.getElementById("onlinejoke").innerHTML =
    `${jokes.setup} - ${jokes.punchline}`;
};
shareOnlineJoke();
