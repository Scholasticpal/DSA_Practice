const createTodo = async (obj) => {
  let options = {
    method: "POST",
    headers: {
      "Content-type": "application/json",
    },
    body: JSON.stringify(obj),
  };

  let p = await fetch("https://jsonplaceholder.typicode.com/posts", options);
  let response = await p.json();
  return response;
};

const getTodo = async (id) => {
  let p = await fetch("https://jsonplaceholder.typicode.com/posts/" + id);
  let response = await p.json();
  return response;
};

const mainFunc = async () => {
  let obj = {
    title: "foo",
    body: "bar",
    userId: 12,
  };
  let todo = await createTodo(obj);
  console.log(todo);
  getTodoResponse = await getTodo(6);
  console.log(getTodoResponse);
};
mainFunc();
