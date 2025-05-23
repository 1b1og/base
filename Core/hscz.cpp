#include<iostream>
using namespace std;
//函数重载  可以让函数名相同，提高复用性
//函数重载的满足条件
//1.在同一个作用域下
//2.函数名称相同
//3.函数参数类型不同，或者个数不同，或者顺序不同
void func()
{
    cout<<"func"<<endl;
}
//函数的返回值不可以作为函数重载的条件
// int func()
// {
//     cout<<"func"<<endl;
// }
void func(int a)
{
    cout<<"func()"<<endl;
}
int main()
{
    func();
    func(10);
    return 0;
}