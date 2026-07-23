/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    int sum=a+b;
    cout<<"sum is:"<< sum<<endl;
    int diff=a-b;
    cout<<"difference is:"<<diff<<endl;
    int multiply=a*b;
    cout<<"multiply is:"<<multiply<<endl;
    int divide=a/b;
    cout<<"division is:"<<divide<<endl;

    return 0;
}