#include<iostream>
using namespace std;

//栈区数据的注意事项————不要返回局部变量的地址
//栈区的数据由编译器管理开辟和释放

int * func()
{
    int a =10; //局部变量  存放在栈区，栈区的数据在函数执行完后自动释放
    return &a; //返回局部变量的地址
}
int main()
{
    //接受func函数
    int * p=func();
    //  cout<<*p<<endl;//局部变量执行后自动释放
    return 0;
}