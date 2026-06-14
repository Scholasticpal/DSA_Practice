// Q. Convert the callback code below to Promise:

const loadScript1 = (e, callback) => {
  let myscript = document.createElement("script");
  myscript.src = e;
  myscript.onload = () => {
    console.log("loaded script with src: ", e);
  };
  callback();
  document.body.appendChild(myscript);
};

function hello() {
  alert("hi there! how are you?");
}

// loadScript1(
//   "https://cdn.jsdelivr.net/npm/bootstrap@5.3.8/dist/js/bootstrap.bundle.min.js",
//   hello,
// );

// Promise version

const loadScript2 = (e) => {
  let myscript = document.createElement("script");
  myscript.src = e;
  return new Promise((resolve, reject) => {
    myscript.onload = () => {
      resolve(`loaded script with src: ${e}`);
    };

    myscript.onerror = () => {
      reject("Error when trying to load the script");
    };

    document.body.appendChild(myscript);
  });
};

loadScript2(
  "https://cdn.jsdelivr.net/npm/bootstrap@5.3.8/dist/js/bootstrap.bundle.min.js",
)
  .then((value) => {
    console.log(value);
    console.log("hi there! how are you?");
  })
  .catch((err) => {
    console.error(err);
  });
