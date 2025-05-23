#include<iostream>
using namespace std;
//引用的基本使用  作用 给变量起别名
// 语法   数据类型 &别名 = 原名
int main()
{
    int a=10;
    int &b =a;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    b=100;  //操作别名和原名都是操作同一块内存
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}