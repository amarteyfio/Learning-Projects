#include <iostream>

using namespace std;

int main()
{
    //Declare variables
    string packageType;
    double amountDue;
    int numJams;

    //Request for package type
    cout << "Enter your package type: ";
    cin >> packageType;

    //Request for number of jams purchased
    cout << "Enter the number of jams purchased: ";
    cin >> numJams;

    //Calculate and display the amount due
    if (packageType == "A" || packageType == "a")
    {
        if(numJams > 2)
        {
            amountDue = 8.00 + (numJams - 2) * 5.00;
        }
        else
        {
            amountDue = 8.00;
        }
        cout << "Amount due: $" << amountDue << endl;
    }
    else if (packageType == "B" || packageType == "b")
    {
       if(numJams > 4)
       {
            amountDue = 12.00 + (numJams - 4) * 4.00;
       }
       else
       {
            amountDue = 12.00;
       }
       cout << "Amount due: $" << amountDue << endl;
    }
    else if (packageType == "C" || packageType == "c")
    {
        if(numJams > 6)
        {
            amountDue = 15.00 + (numJams - 2) * 3.00;
        }
        else
        {
            amountDue = 15.00;
        }
        cout << "Amount due: $" << amountDue << endl;
    }
    else
    {
        cout << "Invalid package type" << endl;
    }
}