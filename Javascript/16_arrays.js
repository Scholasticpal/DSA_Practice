let arr = [1,2, "anmol", true, null, undefined] // arrays can store multiple values of different data types
console.log(arr.length) // length of the array - a method of array
arr[6] = "harry" // adding a new element
arr[3] = "testing" // changing an existing element

for(let i=0; i< arr.length; i++){
    console.log(arr[i])
}