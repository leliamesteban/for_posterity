var express = require('express')
var app = express()

var path = require('path')

app.get('/', function (req, res) {
  res.sendFile(path.join(__dirname + '/index.html'))
  console.log('Serving files in ' + __dirname)
//res.send more than one sentence
});

app.use('/static', express.static('public'));
//app.use(express.static('public'));
//app.use('/static', express,static(__dirname + '/web'));
app.listen(8080, function () {
//  console.log('Example app/server? in (dirname)');
});
