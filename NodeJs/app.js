const express = require('express')

const app = express()

app.get('/',(req,res,next)=>{
    res.send("Backend Setup");
})

app.listen(3000,()=>console.log("Server is running on port 3000"))