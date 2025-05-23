#include<iostream>
using namespace std;
int * func()
{
    //利用new关键字 可以将数据开辟到堆区
    // int a=10;
    // return &a;
    //指针本质也是局部变量，放在栈上，指针保存的数据是放在堆区
    int * p=new int(10);//new返回的就是地址 要什么数据类型后面就写什么数据类型（）写对应的值
    return p;
}
int main()
{
    //在堆区开辟数据
    int *p=func();
    cout<<*p<<endl;
    return 0;
}