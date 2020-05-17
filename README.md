# gitpod起動
url:gitpod.io/#"url"

# ubuntu導入
Linux Terminalsに 
cat /etc/os-release 
を入力

# node.js用のコード
Linux Terminalsに 
npm init 
を入力する．

# index.jsへの入力内容

let port = process.env.PORT || 5000;
const http = require('http');
http.createServer((req, res) => {
  res.writeHead(200, {'Content-Type': 'text/plain'});
  res.end('Hello World\n');
}).listen(port, () => console.log('Server http://localhost:'+port));


# packeage.json の　scripts 内に
"start": "node index.js",
を入力
