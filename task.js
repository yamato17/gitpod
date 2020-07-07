var http = require("http");
var fs = require("fs");

http
.createServer(function(req, res) {
console.log("URL = " + req["url"]);
let text = fs.readFileSync("." + req["url"]);
res.write(text); 
res.end(); 
})
.listen(8080); 
