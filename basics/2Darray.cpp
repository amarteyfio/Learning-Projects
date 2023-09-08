#include <iostream>
#include <array>

using namespace std;


int main(){

int myArr[2][3] = {{1,2,3},{4,5,6}};

for (int i = 1; i >= 0; i--)
{
    for (int j = 0; j < 3; j++)
    {
        cout<< myArr[i][j] << " ";
    }
    cout<<endl;
}

return 0;

}