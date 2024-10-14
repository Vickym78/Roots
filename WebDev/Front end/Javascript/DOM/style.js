let element = document.querySelector('h2')
console.log(element.innerText)
element.innerText = element.innerText + " from javascript change";


let divs = document.querySelectorAll('.box');
divs[0].innerText = divs[0].innerText + "  ADding this extra";

alert("Demo to changing through js");
