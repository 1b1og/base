#include<iostream>
#include<functional>
using namespace std;

//算数仿函数

void test01()
{

    //negate 一元仿函数 取反仿函数
    negate<int>n;
    cout<<n(50)<<endl;

    //plus 二元仿函数  加法仿函数
    plus<int>p;
    cout<<p(10,20)<<endl;
}
int main()
{
    test01();
    return 0;
}