try {
  throw new Error("This is a custom error message");
} catch (error) {
  console.log(error.name);
  console.log(error.message);
  console.log(error.stack)
}
