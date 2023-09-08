#include <iostream>

using namespace std;

int main()
{
    //variables
    int sum = 0;

    int number;

    //primer
    cout << "Welcome to SumFun! Enter a number. If it is greater than 0 it will be added to the sum\n else if it is less then 0 the loop terminates." << endl;
    cout << "> " << endl;
    cin >> number;

    while(number > 0)
    {
        sum = sum + number;

        //primer
        cout << "Welcome to SumFun! Enter a number. If it is greater than 0 it will be added to the sum\n else if it is less then 0 the loop terminates." << endl;
        cout << "> " << endl;
        cin >> number;
    }
   
   cout << sum <<endl;
}
