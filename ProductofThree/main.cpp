#include <iostream>

using namespace std;


int multiply(int a, int b, int c);


int main()
{
    cout << multiply(1,2,3) << endl;
    cout << multiply(4,5,6) << endl;
    return 0;
}

int multiply(int a, int b, int c)
{
    return a * b * c;
}
