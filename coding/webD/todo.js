let todo=[];
let req=prompt("plz enter ur request");
while(true)
    {
        if(req=="quit")
            {
                console.log("quitting app");
                break;
            }
            else if(req=="list")
                {
                    console.log("--------------");
                    for(let i=0;i<todo.length;i++)
                        {
                            console.log(i,todo[i]);
                        }
                        console.log("--------------");
                }
                else if(req=="add")
                    {
                        let task=prompt("plz enter the task you want to add");
                        todo.push(task);
                        console.log("task is added");
                    }
                else if(req=="delete")
                    {
                        let ta=prompt("plz enter the index no. of task you want to delete");
                        todo.splice(ta,1);
                        console.log("task is deleted");
                    }
                    else{
                        console.log("wrong request");
                    }
                   req=prompt("plz enter your request");
    }