var sys = require('sys');
    fs = require('fs');
    util = require('util');
    path = require('path');
 
var port = 8888
var file = '/home/liam/Music/KMD.mp4'
var index;

fs.readFile(path.resolve(__dirname,"index.html"), function (err, data) {
  if (err) {
    throw err;
  }
  index = data;
});
 
var express = require('express')
 
//deprecated apparently
//var app = express.createServer();
var app = express();
 
app.get('/', function(req, res){
  res.writeHead(200, {'Content-Type': 'text/html'});
  res.write(index);
  res.end();
});

app.get('/KMD.mp4', function(req, res){
  sys.puts(util.inspect(req.headers, showHidden=false, depth=0));
 
  var stat = fs.statSync(file);
  if (!stat.isFile()) return;
 
  var start = 0;
  var end = 0;
  var range = req.header('Range');
  if (range != null) {
    start = parseInt(range.slice(range.indexOf('bytes=')+6,
      range.indexOf('-')));
    end = parseInt(range.slice(range.indexOf('-')+1,
      range.length));
  }
  if (isNaN(end) || end == 0) end = stat.size-1;
 
  if (start > end) return;
 
  sys.puts('Browser requested bytes from ' + start + ' to ' +
    end + ' of file ' + file);
 
  var date = new Date();
 
  res.writeHead(206, { // NOTE: a partial http response
    // 'Date':date.toUTCString(),
    'Connection':'close',
    // 'Cache-Control':'private',
    // 'Content-Type':'video/webm',
    // 'Content-Length':end - start,
    'Content-Range':'bytes '+start+'-'+end+'/'+stat.size,
    // 'Accept-Ranges':'bytes',
    // 'Server':'CustomStreamer/0.0.1',
    'Transfer-Encoding':'chunked'
    });
    
    var stream = fs.createReadStream(file,
    { flags: 'r', start: start, end: end});
    stream.pipe(res);
});
    
app.listen(port);

process.on('uncaughtException', function(err) {
sys.puts(err);
});

//res.sendfile(file);
