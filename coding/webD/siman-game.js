let gameSeq=[];
let userSeq=[];

let btns=["yellow","red","purple","green"];

let started=false;
let level=1;

let h3=document.querySelector("h3");
document.addEventListener("keypress",function(){
    if(started==false)
        {
            console.log("game is started");
            started==true;

            levelUp();
        }
});

function btnFlash(btn){
    btn.classList.add("flask");
    setTimeout(function(){
        btn.classList.remove("flash");
    },1000);
}
function levelUp(){
    level++;
    h3.innerText=`Level $(level)`;
    let ran=Math.floor(Math.random()*3);
    let ranc=btns[ran];
    let ranbtn=document.querySelector(`.$(ranc)`);
    btnFlash;    //choose random button
}