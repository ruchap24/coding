// function save(data, success, fail) {
//     let ints = Math.floor(Math.random() * 10) + 1;
//     console.log(ints);
//     if (ints >4) {
//         success();
//     }
//     else {
//         fail();
//     }
// }
// save("apna college", () => {
//     console.log("success");
//     save("rucha", () => {
//         console.log("success");
//         save("raj", () => { console.log("success"); },
//             () => { console.log("fail3"); });
//     },
//         () => { console.log("fail2"); }
//     );
// },
//     () => { console.log("fail1"); }
// );


// promise chainig
// function save(data){
//     return new Promise((resolve,reject)=>{
//         let ints=Math.floor(Math.random()*10)+1;
//         console.log(ints);
//         if(ints>4){
//             resolve("suc");
//         }
//         else{
//             reject("f");
//         }
//     });
// }
// let request=save("raj");
// request.then(()=>{
//     console.log("promise done");
//     console.log(request);
// })
// .catch(()=>{
//     console.log("promise reject");
//     console.log(request);
// });