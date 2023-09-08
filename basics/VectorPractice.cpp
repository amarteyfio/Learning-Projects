#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> names;

    names.push_back("John");
    names.push_back("Paul");
    names.push_back("George");
    names.push_back("Ringo");
    names.push_back("Pete");

    names.insert(names.begin() + 2, "John Baugh");

    names.pop_back();

    for(auto n : names)
    {
        cout<<n<<endl;
    }


}