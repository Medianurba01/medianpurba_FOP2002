#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

int main()
{
  // Random number to guess
  srand(time(0));
  int number = rand() % 100;
  string lanjut;

  //Greating
  cout << "Hello!!! Wellcome back to this game "<<endl;
  cout << "Alright , I have number between 1 - 100!" <<endl;
  cout << "AND, to guess my number you have 5 chance" <<endl;
  cout << "Do the best and good job !" <<endl;

  int guess = -1;
 while (guess != number)
  {
    // Please enter your guess!
    cout << "\nEnter your guess: ";
    cin >> guess;
    if (guess == number) {
      cout << "Yes, my number is " << number <<" \nCongrats on your strunggle " <<endl; 
      cout << "You had been finish the game! YOU'RE THE WINNER!'" <<endl;
    }
 else if (guess > number) {
      cout << "Your guess is too high" << endl;
    }
 else 
      cout << "Your guess is too low" << endl;
    if(guess != number){
    cout <<"\nDo you want to continue this game?"<<endl;
    cin >> lanjut;
    if(lanjut == "yes")	continue;
    else break;
	}

}


  return 0;
}