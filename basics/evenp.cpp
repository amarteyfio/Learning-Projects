#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number. (This code will print all the even numbers between 0 and the number): " << endl;
    cin >> num;

    for(int i = 1; i <= num; i++)
    {
        if(i % 2 == 0)
        {
            cout << i << endl;
        }
    }
}