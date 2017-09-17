# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
using namespace std;

int main()
{
srand ( time(NULL) );
char again;
int randomNumber, guess;
do
{
randomNumber = rand() % 10 + 1;
cout<<"Guess the computer's number"<<endl;
cin>>guess;
if(guess == randomNumber)
{
cout<<"You guessed correctly! You win!"<<endl;
}
else if(guess <= randomNumber) 
{ 
cout<<"You were off by "<<(randomNumber - guess)<<". Sorry, you lose"<<endl;
}
else if(guess >= randomNumber)
{ 
cout<<"You were off by "<<(guess - randomNumber)<<". Sorry, you lose"<<endl;
}

cout<<"Would you like to play again? Enter y or n"<<endl;
cin>>again;
}
while(again == 'y' || again == 'Y'); 

cout<<"Thanks for playing, goodbye"<<endl;

return 0;
}
