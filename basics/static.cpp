#include <iostream>

using namespace std;

void changeStat(int a);

int main()
{
    cout << "Hello World!" << endl;

    changeStat(5);
    cout << endl;
    changeStat(8);
    return 0;
}

void changeStat(int a)
{
    static int status = 0;

    cout << "Current Status is " << status << endl;
    cout << "Added " << a << endl;
    status = status + a;
    cout << "New status is " << status << endl;
}

