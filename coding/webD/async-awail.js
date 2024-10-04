function save(data)
{
    return new Promise((resolve,reject)=>{
        let ints=Math.floor(Math.random()*10)+1;
        if(ints>4){resolve("success");}
        else{reject("fail");}
    });
}
let request=save("rucha");
request.then((result)=>{
    console.log("promise resolve",result);
    console.log(request);
})
.catch((error)=>{
    console.log("promise rejected",error);
    console.log(request);
});