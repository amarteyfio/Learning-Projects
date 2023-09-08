#include <iostream>

using namespace std;


int main()
{
    //prompt user for age and gender
    int age;
    char gender;

    //enter age
    cout << "Enter age: " << endl;
    cin >> age;

    //enter gender
    cout << "Enter gender: " << endl;
    cin >> gender;

    if(age >= 60)
    {
        switch(gender)
        {
            case 'F':
            case 'f':
                cout << "Congratulations, You qualify for the retired female discount!"<<endl;
                break;
            case 'M':
            case 'm':
                cout << "This plan is for women only"<<endl;
                break;
            default:
                cout<<"Invalid Gender"<<endl;

        }//end switch

    }
    else
    {
        cout<<"You must be 60 and older to be eligible for the discount!"<<endl;
    }
 
    return 0;
}