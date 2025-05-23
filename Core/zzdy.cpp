#include<iostream>
using namespace std;
int main()
{
    int a=10;
    //1.指针的定义
    int *p;//指针定义的语法：数据类型*   指针变量名；(数据类型*  是一个整体)
    //让指针记录变量a的地址
    p=&a;//&为取址符
    cout<<"a的地址为: "<<(long long)&a<<endl;
    cout<<"指针p为:"<<p<<endl;

    //2.使用指针
    //可以通过解引用的方式来找到指针指向的内存
    //指针前加*代表解引用，找到指针指向的内存中的数据
    // *p=1000;//p是地址  *p是值
    cout<<"a="<<a<<endl;
    *p=1000;//p是地址  *p是值
    cout<<"*p="<<*p<<endl;
    return 0;
}