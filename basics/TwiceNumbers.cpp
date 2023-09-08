#include <iostream>
#include <array>

using namespace std;


int main()
{
    array<int, 10> array;

    for(int i = 0; i < array.size(); i++)
    {
        array[i] = i * 2;
    }

    for(auto n : array)
    {
        cout<<n<<endl;
    }
}