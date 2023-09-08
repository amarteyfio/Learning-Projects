#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n; // number of digits
    int numbers[n]; // array of digits
    int sum = 0; //sum of digits
    float average; //average of digits

    //get the number of digits from user
    cout << "Enter the number of digits: " << endl;
    cin >> n;

     //get the digits and add to array
    for(int i = 0; i < n; i++)
    {
        cout << "Enter number: "<< endl;
        cin >> numbers[i];  
        sum += numbers[i];
    }

    average = static_cast<float>(sum) / n; //calculate average

    //output average
    cout << "Average = " << average << endl;

    return 0;

}