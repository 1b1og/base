#include<iostream>
using namespace std;
//引用注意事项
//引用必须初始化
//引用在初始化后不可以改变
int main()
{
    //int &b; 错误
    int a=10;
    int d=20;
    int &b=a;
    int &c=a;//可以有多个别名
    cout<<"a="<<a<<endl;
    b=d; //这是赋值操作 不是更改引用
    // int &b=d;//初始化后不能更改
    
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
    cout<<"d="<<d<<endl;
    return 0;
}