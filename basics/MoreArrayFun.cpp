#include <iostream>

using namespace std;


int main()
{
    const int SIZE = 10;

    int array[SIZE];

    for(int i = 0; i < SIZE; i++)
    {
        array[i] = i + 1;
    }

    for(auto n : array)
    {
        cout<<n<<endl;
    }
}