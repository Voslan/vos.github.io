var number = Math.floor((Math.random() * 20) + 1);
var guess = 0; 
var trycount = 0; 

function startGame() {
  
  while (guess != number && trycount < 5)
  {
    var x = prompt("Enter a Value", "0");
    var guess = parseInt(x);  
    
    if(guess < number) {
      prompt("Number too low"); 
    }
    else if (guess > number) {
      prompt("Number too high")
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
