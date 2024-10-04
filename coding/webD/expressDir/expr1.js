const express = require('express')
const app = express()

// console.dir(app);
  //go to expressjs.com-->api reference-->app methods
  //yat app.get app.post app.listen app.use app.delete app.path app.put app.//route asya bharpur methods ani tyancye usage dilele aahet. te vachane
  //syntax of get ==> app.get(path,callback,[callback...])
  // '/' -->path  /search mhanje you contacted search path
let port = 8000
//
// app.get('/', (req, res) => {
//   res.send("Hello World!")
// })

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})

app.get("/",(req,res)=>{
  res.send("you contacted root path");
})

app.get("/apple",(req,res)=>{
  res.send("you contacted apple path");
})

app.get("/mango",(req,res)=>{
  res.send("you contacted mango path");
})

app.get("/orange",(req,res)=>{
  res.send("you contacted orange path");
})

//custom responce.   404 error yayala nko mhanun as ghetat
app.get("*",(req,res)=>{
  res.send("this page doesnt exist");
})

app.post("/",(req,res)=>{
  res.send("you send a post request");
})
// app.use((req,res)=>{console.log("request receive");
//   res.send("<h1>standard response</h1><li><ul>apple</ul><ul>orange</ul><ul>mango</ul></li>");
// });