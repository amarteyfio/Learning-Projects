#include <iostream>
#include <cmath>

using namespace std;

double log2func(int a);

int main()
{
    cout << "Log(base 2) of 512 is " << log2func(512) << endl;
    return 0;
}

double log2func(int a)
{
    return log2(a);
}