#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    cout << "Welcome to Guess My Number\n In this game the computer will generate \n a number between 0 and 100 and you will guess it!!" << endl;
    cout << "Let's Begin!" << endl;

    //seed for random number generator
    srand(time(nullptr));

    //declare variables
    int number;
    int guess;
    int attempts = 4;

    number = rand() % 100 + 1;

    while (attempts != 0)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if(guess == number)
        {
            cout << "You guessed correctly!" << endl;
            break;
        }
        else if(guess > number)
        {
            cout << "Your guess is too high!" << endl;
            attempts--;
            cout << "You have " << attempts << " attempts left!" << endl;
        }
        else if(guess < number)
        {
            cout << "Your guess is too low!" << endl;
            attempts--;
            cout << "You have " << attempts << " attempts left!" << endl;
        }
    }




    
    
}