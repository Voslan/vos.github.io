var canvas = document.getElementById("myCanvas");
var cxt = canvas.getContext("2d");
var x = canvas.width/2; 
var y = canvas.height-30; 
var dx = 8; 
var dy = -8; 
var ballRadius = 10; 

function drawBall(){
  cxt.beginPath();
  cxt.arc(x,y,ballRadius,0,Math.PI*2,false);
  cxt.fillStyle = "#0095DD";
  cxt.fill();
  cxt.closePath();
}

function bounce(){
  if (y + dy < 0 || y + dy > canvas.height) {
    dy = -dy; 
  }
  if (x + dx < 0 || x + dx > canvas.width) {
    dx = -dx; 
  }
}

function draw() {
  cxt.clearRect(0,0,canvas.width,canvas.height)
  drawBall();
  x += dx; 
  y += dy; 
  bounce(); 
}
setInterval(draw,10); 



