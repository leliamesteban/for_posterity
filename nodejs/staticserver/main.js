var express = require('express');
var app = express();

//compress
app.use(express.compress());

//caching
var oneDay = 86400000;

// redundant // app.use(express.static(__dirname + '/public')); 
app.use('/static', express.static(__dirname + '/public' { maxAge: oneDay }));

app.listen(process.env.port || 8080);
