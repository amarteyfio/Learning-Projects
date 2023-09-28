#include <iostream>
#include <array>

using namespace std;

int ArraySum(array<int,10> arr);


int main()
{
    array<int,10> arr{1,2,3,4,5,6,7,8,9,10};
    cout << ArraySum(arr) << endl;
    return 0;
}


int ArraySum(array<int,10> arr)
{
    int sum = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    return sum;
}