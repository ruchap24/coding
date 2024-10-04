let url = "https://cat-fact.herokuapp.com";
// const getfact=async()=>{
//     console.log("getting data....");
//     let response=await fetch(url);
//     console.log(response.);
// }

// fetch(url).then((res) => {
//     console.log(res);
//     return res.json();
// })
//     .then((data) => { console.log(data); })
//     .catch((err) => { console.log("erroe", err); });

async function getcats(){
        const config={header:{accept:"application/json"}};
        let res=await axios.get(url,config);
        console.log(res);
        console.log(config);
}