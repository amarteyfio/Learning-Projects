#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>


using namespace std;


int main()
{
    //Declare Vars
    string userChoice;
    string cpuChoice;
    int userScore = 0;
    int cpuScore = 0;
    array<string,3> choices{"Rock", "Paper", "Scissors"};

    //seed for random number generator
    srand(time(nullptr));

    //Welcome Prompt
    cout << "Welcome to Rock Paper Scissors!"<<endl;
    cout << "Let's Begin" << endl;

    //Game Loop
    while(true)
    {
        //Prompt User Choice
        cout << "Rock, Paper, Scissors?: ";
        cin >> userChoice;

        //CPU choice
        cpuChoice = choices[rand() % 3];

        //Game Logic
        if(userChoice == cpuChoice)
        {
            cout << "You picked "<< userChoice << "\nAI picked " << cpuChoice << endl; 
            cout << "It's a Tie :|"<<endl;
        }
        else if(userChoice == "Rock" && cpuChoice == "Scissors")
        {
            cout << "You picked "<< userChoice << "\nAI picked " << cpuChoice << endl; 
            cout << "You get a Point!"<<endl;
            userScore++;
        }
        else if(userChoice == "Paper" && cpuChoice == "Rock")
        {
            cout << "You picked "<< userChoice << "\nAI picked " << cpuChoice << endl; 
            cout << "You get a Point!"<<endl;
            userScore++;
        }
        else if(userChoice == "Scissors" && cpuChoice == "Paper")
        {
            cout << "You picked "<< userChoice << "\nAI picked " << cpuChoice << endl; 
            cout << "You get a Point!"<<endl;
            userScore++;
        }
        else if(userChoice == "Rock" && cpuChoice == "Paper")
        {
            cout << "You picked "<< userChoice << "\nAI picked " << cpuChoice << endl; 
            cout << "AI gets a Point!"<<endl;
            cpuScore++;
        }
        else if(userChoice == "Paper" && cpuChoice == "Scissors")
        {
            cout << "You picked "<< userChoice << "\nAI picked " << cpuChoice << endl; 
            cout << "AI gets a Point!"<<endl;
            cpuScore++;
        }
        else if(userChoice == "Scissors" && cpuChoice == "Rock")
        {
            cout << "You picked "<< userChoice << "\nAI picked " << cpuChoice << endl; 
            cout << "AI gets a Point!"<<endl;
            cpuScore++;
        }

        cout << "USER SCORE: " << userScore <<endl;
        cout << "CPU SCORE: " << cpuScore <<endl;


        if(userScore == 2)
        {
            cout << "YOU WIN THE GAME!!!!!!!!!" <<endl;
            return false;
            break;
        }
        else if(cpuScore == 2)
        {
            cout << "You Lose :( . Try Again?";
            return false;
            break;
        }

    }
    

}
