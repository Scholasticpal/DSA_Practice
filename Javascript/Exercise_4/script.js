// Exercise 4

/* Create a digital seconds clock using setInterval and Date object is js. The Date Object can be used to get the
date, time, hours and seconds which can be updated using setInterval. Try to keep the UI good looking. */

console.log();
setInterval(() => {
  document.getElementById("timediv").innerHTML =
    new Date().toLocaleTimeString();
}, 1000);
