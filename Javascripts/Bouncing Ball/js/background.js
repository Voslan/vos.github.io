// class object that store all the images. 
var imageRepo = new function(){
  this.background = new Image(); 
  this.background.src = "img/bg2.jpg"; 
}

// abstract class 
function Drawable() {
  this.init = function(x,y) {
    this.x = x;
    this.y = y; 
  }
  
  this.speed = 0; 
  this.canvaswidth = 0; 
  this.canvasheight = 0; 
  
  this.draw = function () {
    
  }; 
}

// Draw background image, moving image 
function Background () {
  this.speed = 1; 
  this.draw = function () {
    this.y += this.speed; 
    this.context.drawImage(imageRepo.background, this.x, this.y); 
    // draw another picture at the top of the screen 
    this.context.drawImage(imageRepo.background, this.x, this.y - this.canvasheight);   
    if(this.y >= this.canvasheight)
      {
        this.y = 0; 
      }
  }; 
}
// set background function inherit from the drawable function. 
Background.prototype = new Drawable(); 

function Game() {
  this.init = function () {
    this.bgcanvas = document.getElementById("background"); 
    // checking if the canvas is supported by the browser. 
    if(this.bgcanvas.getContext) {
      this.bgcontext = this.bgcanvas.getContext("2d");     
      // initialize object contents background context and canvas. 
      Background.prototype.context = this.bgcontext; 
      Background.prototype.canvaswidth = this.bgcanvas.width; 
      Background.prototype.canvasheight = this.bgcanvas.height;       
      // initialize background object. 
      this.background = new Background(); 
      this.background.init(0,0);      
      return true; 
    }else{
      return false; 
    }
  };
  
  // animation loop. 
  this.start = function() {
    animate(); 
  };
}

function animate() {
  requestAnimationFrame(animate); 
  game.background.draw(); 
}


var game = new Game(); 

function init() {
  if(game.init()) {
    game.start(); 
  }
}

















