#include<iostream>
using namespace std;
int * test()
{
    int a=10;
    return &a;
}
int main()
{
    int * p=test();
    cout<<*p<<endl;
    cout<<*p<<endl;
    return 0;
}