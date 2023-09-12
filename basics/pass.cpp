#include <iostream>

using namespace std;


void threeTimesN(int a, int& b);

int main()
{
    //call function
    int b = 4;

    threeTimesN(b, b);

    cout << b << endl;

    return 0;
}

void threeTimesN(int a, int& b)
{
    b = a * 3;
}