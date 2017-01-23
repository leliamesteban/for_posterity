var http = require('http');
    fs = require('fs');
    path = require('path');

var index

fs.readFile(path.resolve(__dirname,"index.html"), function (err, data) {
  if (err) {
    throw err;
  }
  index = data;
});
http.createServer(function (req, res) {
  res.writeHead(200, {'Content-Type': 'text/html'});
  res.write(index);
  res.end();
}).listen(8080);

console.log('Server running on port 8080.');
