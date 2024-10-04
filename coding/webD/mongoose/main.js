//https://www.npmjs.com/package/mongodb
// explore the above package
import mongoose from "mongoose";
import express from "express";

let a= await mongoose.connect("mongodb://localhost:27017/")
// const express = require('express');
const app = express();
const port = 3000

app.get('/', (req, res) => {
res.send('<h1> Hello, World! </h1>');
});

app.listen(8000, () => {
console.log(`Server is listening at http://localhost:8000`);
});
