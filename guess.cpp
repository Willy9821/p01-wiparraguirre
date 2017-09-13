# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
using namespace std;

int main()
{
srand ( time(NULL) );
int randomNumber, guess;
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
return 0;
} 
