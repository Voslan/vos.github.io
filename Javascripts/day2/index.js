var number = Math.floor((Math.random() * 20) + 1);
var guess = 0; 
var trycount = 0; 

function startGame() {
  
  while (guess != number && trycount < 8)
  {
    var x = prompt("Guess a number from 1 to 20", "0");
    var guess = parseInt(x);  
    
    if(guess < number) {
      prompt("too low"); 
    }
    else if (guess > number) {
      prompt("too high")
    }
    trycount++; 
  }
  
  if (guess == number) {
    prompt("you guess right!")
  }
  else{
    prompt("you guess incorrect!")
  }
}
