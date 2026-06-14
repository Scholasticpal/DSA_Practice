// // Difference between localStorage and sessionStorage
// // localStorage stores data with no expiration date,
// // while sessionStorage stores data for one session (data is lost when the browser tab is closed).
// // Both localStorage and sessionStorage are part of the Web Storage API and allow you to store key-value pairs
// //  in the browser.

// localStorage.setItem("name", "John Doe");
// localStorage.getItem("name"); // Returns 'John Doe'
// // localStorage.removeItem("name");
// // localStorage.clear(); // Clears all items in localStorage
// console.log(localStorage.length); // Returns the number of items in localStorage

// sessionStorage.setItem("sessionName", "Jane Doe");
// sessionStorage.getItem("sessionName"); // Returns 'Jane Doe'
// // sessionStorage.removeItem("sessionName");
// // sessionStorage.clear(); // Clears all items in sessionStorage
// console.log(sessionStorage.length); // Returns the number of items in sessionStorage

// // storage event
// window.onstorage = (e) => {
//   alert("Storage changed!");
//   console.log(e);
// };
