// let btn=document.querySelector("button");
// btn.addEventListener("click",function(){
//     let h1= document.querySelector("h1");
//     let ra=racolor();
//     h1.innerText=ra;

//     let div=document.querySelector("div");
//     div.style.backgroundColor= ra;
//     console.log("color updated");
// });
// function racolor(){
//     let red=Math.floor(Math.random()*255);
//     let green=Math.floor(Math.random()*255);
//     let blue=Math.floor(Math.random()*255);
//     let color= `rgb(${red},${green},${blue})`;
//     return color;
// }

let form=document.querySelector("form");
form.addEventListener("submit",function(event){
    console.log("form submitted");
    event.preventDefault();
    console.log(inp.value);
});
let inp=document.querySelector("input");
// form.addEventListener("keydown",function(event){
//     console.log(event.code);
//     console.log(event.key);
// });
// form.addEventListener("keyup",function(event){
//     console.log(event.code);
//     console.log(event.key);
// });