// Conditional Statements

//note: alert() prompt() function is a browser function and will only work in one unless relevant lib is imported
let a = prompt("Hey, whats your age?") 
// this lets us add response, which is always stored as a string.

console.log(typeof(a));
a = Number.parseInt(a) // type caste string to num
alert(a);


if(a>0){
    alert("This is a valid age")
}
else if(a==0){
    alert("Congratulations! u have a smol human!")
}
else{
    alert("This is not a valid age")
}