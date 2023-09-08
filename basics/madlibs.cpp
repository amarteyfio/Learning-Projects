#include <iostream>

using namespace std;

int main()
{
    //variables
    string adj1; // adjective 1
    string adj2; //adjective 2
    string adj3; //adjective 3
    string mc_name; //main character name
    string job1; //job1
    string job2; //job2
    string place; //place
    string hobby; //hobby
    string k_name; //king name
    string l_name; //lover name
    string clothes; //clothes

    //adj1
    cout << "Enter an adjective : " <<endl;
    cin >> adj1;

    //mc_name
    cout << "Enter a boy's name : " <<endl;
    cin >> mc_name;

    //adj2
    cout << "Enter an adjective : " <<endl;
    cin >> adj2;

    //job1
    cout << "Enter a job's name : " <<endl;
    cin >> job1;

    //place
    cout << "Enter the name of a place : "<<endl;
    cin >> place;

    //clothes
    cout << "Enter the name of a piece of clothing : "<<endl;
    cin >> clothes;

    //hobby
    cout << "Enter a hobby : "<<endl;
    cin >> hobby;


    //output story
    cout << "There once was a " <<adj1 << " boy named " << mc_name  << " who was a " << adj2 << " " << job1 << " in the Kingdom of " << place << ". He loved to wear " << clothes << " and " << hobby << endl;



}