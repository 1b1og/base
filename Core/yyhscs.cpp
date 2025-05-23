#include<iostream>
using namespace std;
//引用做函数参数
//交换函数
//1.值传递
void swap01(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}
//2.地址传递
void swap02(int *a,int *b)
{
    int temp=*a;  // *代表解引用  这里a是地址
    *a=*b;
    *b=temp;
}
//3.引用传递
void swap03(int &a,int &b) // 这里的a，b是实参a，b的别名  交换别名实际上就是交换了实参
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=10,b=20;
    // swap01(a,b);//值传递 形参不会修饰实参
    // swap02(&a,&b);//地址传递 形参可以修饰实参  传入的是地址
    swap03(a,b);//引用传递 形参可以修饰实参
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}