#include <iostream>
#include <vector>


using namespace std;

int main()
{
    //vector
    vector<int> collection;

    //input
    int input;

    cout << "Enter a positive integer to add to the vector or negative to quit : ";
    cin >> input;

    while(input >= 0)
    {
        collection.push_back(input);
        cout << "Enter a positive integer to add to the vector or negative to quit : ";
        cin >> input;
    }

    //output
    for(int a : collection)
    {
        cout << a * 2 << endl;
    }
}