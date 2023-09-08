#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //vectors
    vector<string> names;
    vector<double> weights;

    //input vars
    string n; //names
    double w; //weights

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter a name: "<<endl;
        cin >> n;
        cout << "Enter a Weight ";
        cin >> w;

        names.push_back(n);
        weights.push_back(w);


    }

    for (int i = 0; i < 5; i++)
    {
        cout << names[i] << " weighs " << weights[i] << " pounds." << endl;
    }
}



