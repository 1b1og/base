#include<iostream>
using namespace std;
//函数重载的注意事项
//1.引用作为重载的条件
void func(int &a) //int &a=10; 不合法
{
    cout<<"func(int &a)"<<endl;
}
void func(const int &a)// const int &a=10; 合法
{
    cout<<"func(const int &a)"<<endl;
}
//2.函数重载碰到默认参数
void func2(int a)
{
    cout<<"func2(int a)"<<endl;
}
void func2(int a,int b=10)//函数重载就不要加默认参数
{
    cout<<"func2(int a,int b)"<<endl;
}
int main()
{
    // int a=10;
    // func(a); //调用void func(int &a)函数
    func(10);  //调用 void func(const int &a) 函数
    // func2(1); //当函数重载碰到默认参数，出现二义性，报错，尽量避免这种情况 
    return 0;
}