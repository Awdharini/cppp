#include <iostream>
#include <cstdlib>

int main() {
int compvar = std::rand() % 10;//0,1 - rock 2,3 - paper 4,5 - scissors 6,7 - lizard 8,9 - spock
int playvar = 0;
std::cout << "Choose one: \n 1)Rock \n 2)Paper \n 3)Scissors \n 4)Lizard \n 5)Spock \n";
std::cin >> playvar;
  if(playvar == 1){
    std::cout << "Your choice is Rock \n";
    if(compvar == 0 or compvar == 1){
      std::cout << "Your opponents choice is Rock \n Draw. \n";
    }
    else if(compvar == 2 or compvar == 3){
      std::cout << "Your opponents choice is Paper \n You lose. \n";
    }
    else if(compvar == 4 or compvar == 5){
      std::cout << "Your opponents choice is Scissors \n You win. \n";
    }
    else if(compvar == 6 or compvar == 7){
      std::cout << "Your opponents choice is Lizard \n You win. \n";
    }
    if(compvar == 8 or compvar == 9){
      std::cout << "Your opponents choice is Spock \n You lose. \n";
    }
  }
  else if(playvar == 2){
    std::cout << "Your choice is Paper \n";    		 if(compvar == 0 or compvar == 1){
      std::cout << "Your opponents choice is Rock \n You win. \n";
    }
    else if(compvar == 2 or compvar == 3){
      std::cout << "Your opponents choice is Paper \n Draw. \n";
    }
    else if(compvar == 4 or compvar == 5){
      std::cout << "Your opponents choice is Scissors \n You lose. \n";
    }
    else if(compvar == 6 or compvar == 7){
      std::cout << "Your opponents choice is Lizard \n You lose. \n";
    }
    if(compvar == 8 or compvar == 9){
      std::cout << "Your opponents choice is Spock \n You win. \n";
    }
  }
  else if(playvar == 3){
    std::cout << "Your choice is Scissors \n";
    if(compvar == 0 or compvar == 1){
      std::cout << "Your opponents choice is Rock \n You lose. \n";
    }
    else if(compvar == 2 or compvar == 3){
      std::cout << "Your opponents choice is Paper \n You win. \n";
    }
    else if(compvar == 4 or compvar == 5){
      std::cout << "Your opponents choice is Scissors \n Draw. \n";
    }
    else if(compvar == 6 or compvar == 7){
      std::cout << "Your opponents choice is Lizard \n You win. \n";
    }
    if(compvar == 8 or compvar == 9){
      std::cout << "Your opponents choice is Spock \n You lose. \n";
    }
  }
  else if(playvar == 4){
    std::cout << "Your choice is Lizard \n";
    if(compvar == 0 or compvar == 1){
      std::cout << "Your opponents choice is Rock \n You lose. \n";
    }
    else if(compvar == 2 or compvar == 3){
      std::cout << "Your opponents choice is Paper \n You win. \n";
    }
    else if(compvar == 4 or compvar == 5){
      std::cout << "Your opponents choice is Scissors \n You lose. \n";
    }
    else if(compvar == 6 or compvar == 7){
      std::cout << "Your opponents choice is Lizard \n Draw. \n";
    }
    if(compvar == 8 or compvar == 9){
      std::cout << "Your opponents choice is Spock \n You win. \n";
    }
  }
  else if(playvar == 5){
    std::cout << "Your choice is Spock \n";
    if(compvar == 0 or compvar == 1){
      std::cout << "Your opponents choice is Rock \n You win. \n";
    }
    else if(compvar == 2 or compvar == 3){
      std::cout << "Your opponents choice is Paper \n You lose. \n";
    }
    else if(compvar == 4 or compvar == 5){
      std::cout << "Your opponents choice is Scissors \n You win. \n";
    }
    else if(compvar == 6 or compvar == 7){
      std::cout << "Your opponents choice is Lizard \n You lose. \n";
    }
    if(compvar == 8 or compvar == 9){
      std::cout << "Your opponents choice is Spock \n Draw. \n";
    }
	else{
  std::cout << "Invalid input \n";
}
  }
}