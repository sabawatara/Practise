#include <iostream>

using namespace std;

int main()

{
    int num;

    cout<< "Please input your number: "<<endl;
    cin>> num;

    for (int i = num; i<= num + 10; i++)
    {
        cout<< i<< " ";


    }


    return 0;
}
