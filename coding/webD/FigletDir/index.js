const figlet=require("figlet");
figlet("hello",function(err,data){
    if(err){
        console.log("hiii");
        console.dir(err);
        return;
    }
    console.log(data);
})