html


<!DOCTYPE html>
<html>
    <head>
        <meta charset="utf-8">
        <title>
        </title>
        <script src="street.js">
        </script>
    </head>
    <body>
        <input id="search">
        <button id = "button" onclick="search()">Найти<button>
    </body>
</html>


js


function getRandomNum(){
    const rndInt = Math.floor(Math.random() * 100) + 1;
    return rndInt;
}

const arrayInt = [];
const array2 = [];

for(let i = 0; i < 10; i++){
    arrayInt.push(getRandomNum());
}

for(let i = 0; i < 5; i++){
    array2.push(getRandomNum());
}

function first(array){
    console.log(array);
}

function second(array){
    const result = [];
    for(let i = 0; i <= array.length; i++){
        if(array[i] % 2 === 0){
            result.push(array[i]);
        }
    }
    console.log(result);
}

function third(array){
    let sum = 0;
    for(let i = 0; i < array.length; i++){
        sum += array[i];
    }
    console.log(sum);
    
}

function fourth(array){
    const result = [...array];
    result.sort(function(a,b){
        return a - b;
    });
    console.log(result.pop())
}

function fiveth(array, index, item){
    const result = [...array];
    result.splice(index, 0, item);
    console.log(result);
}

function sixth(array, index){
    const result = [...array];
    result.splice(index, 1);
    console.log(result);
}


arrayOne = [1,2,3,4,5,6,7,8,9];
arrayTwo = [1,2,3,4,5];

function seventh(array1, array2){
    const result = [...new Set([...array1, ...array2])];
    /*const result = array1.concat(array2);
    const uniq = [...new Set(result)];*/
    
    console.log(result);
    console.log(uniq);
}


function eightth(array1, array2){
    const result = array1.filter(function(item){
        return array2.indexOf(item) > -1
    });
    console.log(result);
}

function nineth(array1, array2){
    const result = array1.filter(function(item){
        return array2.indexOf(item) === -1
    });
    console.log(result);
}



const fruits = ['яблоко', 'персик', 'груша', 'ананас', 'банан'];
const fruitsSort = fruits.sort();
console.log(fruits);
//console.log(fruits.sort());
document.write('<ul>');
for(let i = 0; i <fruitsSort.length; i++){
    document.write('<li>');
    document.write(fruitsSort[i]);
    document.write('</li>');
}
document.write('</ul>')

function search(){
    let searchText = document.getElementById('search').value;
    console.log(searchText);
    console.log(fruits.indexOf(searchText.toLowerCase()) > -1 ? `Есть такой фрукт - ${searchText}!` : `Нет такого фрукта`);
}

window.onload = init;
function init(){
    let button = document.getElementById('button');
console.log(button);
}


/*console.log(arrayOne);
console.log(arrayTwo);
eightth(arrayOne, arrayTwo);
nineth(arrayOne, arrayTwo);*/


/*second(arrayInt);
first(arrayInt);
third(arrayInt);
fourth(arrayInt);
sixth(arrayInt, 6);*/
