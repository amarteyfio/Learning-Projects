#include <iostream>

using namespace std;


int sumofArray(int arr[], int size, int& sum);


int main()
{
    int arr[5] = {1,2,3,4,5};
    int sum = 0;
    cout << sumofArray(arr, 5, sum) << endl;
    cout << sum << endl;
    return 0;
}

int sumofArray(int arr[], int size , int& sum)
{
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}