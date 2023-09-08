#include <iostream>
#include <array>

using namespace std;

int main(){
    
    cout << "Hello Please enter 5 integers: " << endl;

    array<int,5> nums;

    for(int i = 0; i < 5; i++)
    {
        cin >> nums[i];
    }
    cout<<endl;

    for (int n : nums)
    {
        cout << n * 2 << endl;
    }

     
}