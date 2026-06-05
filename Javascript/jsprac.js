const reversedString = str => str.split(' ').reverse().join(' ');

const uniqueArr = arr => [...new Set(arr)];

const mergeObj = (obj1, obj2) => {
   const result = {...obj1};
   for(const key in obj2){
    if(!result.hasOwnProperty(key)){
        result[key] = obj2[key];
    }
   } 
   return result;
}

const currentData = () => new Date().toISOString.split('T')[0];