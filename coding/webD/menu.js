// function toggleMenu(x){
//     x.classList.toggle("change");
// }


// function oddeven(request)
// {
//     if(request=="odd")
//         {
//             return function(n)
//             {
//                 console.log(n%2!=0);
//             }
//         }
//         else if(request=="even")
//             {
//                 return function(n)
//                 {
//                     console.log(n%2==0);
//                 }
//             }
//             else{
//                 console.log("wrong request");
//             }
// }
// oddeven("even");
// oddeven("odd");


// let arr = [8, 9, 10, 1, 2, 3, 4, 5, 6, 7];
// let num = 5;
// //elements larger than a number num
// function getElements(arr, num) {
// for (let i = 0; i < arr.length; i++) {
// if (arr[i] > num) {
// num=arr[i];
// }
// }
// console.log(num);
// }
// getElements(arr, num);


//  function sum(...args)
// {
//     for(let i=0; i<=args.length; i++)
//         {
//             console,log("you gave us",args[i]);
//         }
// }


// function save(data)
// {
//     return new Promise((success, fail) => {
//         let int = Math.floor(Math.random() * 10) + 1;
//         if (int > 4) {
//             success("success");
//         }
//         else {
//             fail("failure");
//         }
//     });
// }
// save("rucha");


// function neww(data, success, ffail) {
//     let speed = Math.floor(Math.random() * 10) + 1;
//     if (speed > 4) {
//         success();
//     }
//     else {
//         ffail();
//     }
// }
// save("rucha",
//     () => {
//         console.log("success");
//         save("raj", () => {
//             console.log("success");
//             save("ruuu", () => { console.log("success"); })
//         })
//     },
//     () => { console.log("fail"); }
// );


// function neww(data, success, failure) {
//     let int = Math.floor(Math.random() * 10);
//     if (int > 4) {
//         success();
//     }
//     else {
//         failure();
//     }
// }
// neww("rucha",
//     () => {
//         console.log("rucha");
//         //  neww("surendra", () => { console.log("surendra"); },()=>{console.log("out");})
//         neww("surendra", () => { console.log("surendra"); }
//             , () => { console.log("fail"); })
//         neww("patil", () => {
//             console.log("patil");
//             neww("ramrao", () => { console.log("ramrao"); },
//                 () => { console.log("fail1"); })
//         }, () => { console.log("fail2"); });
//     },
//     () => { console.log("exit"); })

// let div = document.querySelector("div");
// function change(color, delay, next) {
//     setTimeout(() => {
//         div.style.backgroundColor = color;
//         if (next) next();
//     }, delay);
// }
// change("red", 1000, () => { change("blue", 1000, () => { change("black", 1000, () => { change("brown", 1000, () => { change("green", 1000); }); }); }); });

//  function save(data)
// {
//     return new Promise((resolve,reject)=>{
//         let ints=Math.floor(Math.random()*10)+1;
//         if(ints>4){
//             resolve("success");
//         }
//         else{reject("fail");}
//     });
// }

// let request=save("rucha");
// request.then((result)=>{
//     console.log("promise resolve",result);
//     console.log(request);
// })
// .catch((error)=>{
//    console.log("promise rejected",error);
//     console.log(request);
// })

// let h = document.querySelector("div");
// function change(color, delay) {
//     return new Promise((resolve, reject) => {
//         setTimeout(() => {
//             let num=Math.floor(Math.random()*10)+1;
//             if (num>10){
//                reject("promise rejected"); 
//             }
//              h.style.Color = color;
//              resolve("yes"); }, delay);
//     });
// }

// async function demo(){
//    try{
//         await change("red",1000);
//         await change("yellow",1000);
//         await change("pink",1000);
//       }
//       catch(er){
//         console.log("error caught",er)
//       }
//     }

    // let a=5;
    // console.log(a);
    // console.log(a+3);


    let li=document.querySelector("li");
    li.addEventListener("click",function(){
      console.log("p trigger");
    });
 
    let div=document.querySelector("div");
    div.addEventListener("click",function(){
      console.log("div trigger");
    });

    let btn=document.querySelector("button");
    btn.addEventListener("click",function(){
      alert("button clicked");
    });

    let para=document.querySelector("p");
    para.addEventListener("click",function(){
      console.log("paragraph trigger");
    });