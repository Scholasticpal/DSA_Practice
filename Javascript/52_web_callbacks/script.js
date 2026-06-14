const loadScript = (e, callback) => {
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

loadScript(
  "https://cdn.jsdelivr.net/npm/bootstrap@5.3.8/dist/js/bootstrap.bundle.min.js",
  hello,
);
