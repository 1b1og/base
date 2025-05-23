#include<iostream>
using namespace std;
//普通函数与函数模板的调用规则
//既然提供了函数模板就不要提供普通函数，否则容易出现二义性
//普通函数
void myPrint(int a,int b)
{
    cout<<"调用普通函数"<<endl;
}

template<typename T>
void myPrint(T a,T b)
{
    cout<<"调用函数模板"<<endl;
}

template<typename T>
void myPrint(T a,T b,T c)
{
    cout<<"调用重载函数模板"<<endl;
}
void test01()
{
    int a=10;
    int b=20;
    // myPrint(a,b);  //普通函数和函数模板都可以调用时，优先调用普通函数

    //通过空模板参数列表，强制调用函数模板  <>是模板参数列表
    // myPrint<>(a,b);

    // myPrint(a,b,100);

    //如果函数模板产生更好的匹配，优先调用函数模板
    char c1='a';
    char c2='b';
    myPrint(c1,c2);
}
int main()
{
    test01();
    return 0;
}