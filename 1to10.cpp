#include <iostream>

using namespace std;

int main()
{
    int a, i;
    a= 0;
    cout<< "The first ten positive integers are: "<<endl;
    while (a < 10)
    {
        i = ++a;
        cout<<i<<endl;
    }
    return 0;
}
