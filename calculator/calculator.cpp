#include <iostream>
#include <cmath>

using namespace std;

/**
 * @brief Function for adding 2 numbers
 * 
 * @param a 
 * @param b 
 * @return int 
 */
float addition(int a, int b)
{
    return round((a + b)*100)/100;
}

/**
 * @brief Function for subtracting 2 numbers
 * 
 * @param a 
 * @param b 
 * @return int 
 */
float subtraction(int a, int b)
{
    return round((a - b)*100)/100;

}
/**
 * @brief Function for dividing 2 numbers
 * 
 * @param a 
 * @param b 
 * @return float 
 */
float division(int a, int b)
{
    return round((a/b)*100)/100;
}

/**
 * @brief Function for multiplying 2 numbers
 * 
 */
float multiplication (int a, int b)\
{
    return round((a * b)*100)/100;
} 


int main()
{
    //user choice
    int operation;
    int a,b;
    string result;

    //get user choice
    cout<<"Select the type of operation you want."<<endl;
    cout<<"1. Addition  2. Subtraction  3. Division  4. Multiplication"<<endl;
    cout<<"> ";
    cin>>operation;

    //get the 2 numbers
    cout<<""<<endl;
    cout<<"Enter the First Digit: "<<endl;
    cin>>a;
    cout<<"Enter the Second Digit: "<<endl;
    cin>>b;

    //determine operation and call the function
    if(operation == 1)
    {
        result = to_string(addition(a,b));
        cout<<"Result: "<<result<<endl;
        
    }
    else if(operation == 2)
    {
        result = to_string(subtraction(a,b));
        cout<<"Result: "<<result<<endl;
        
    }
    else if(operation == 3)
    {
        result = to_string(division(a,b));
        cout<<"Result: "<<result<<endl;
        
    }
    else if(operation == 4)
    {
        result = to_string(multiplication(a,b));
        cout<<"Result: "<<result<<endl;
        
    }
    else
    {
        cout<<"Invalid Input"<<endl;
    }

    
    
}
