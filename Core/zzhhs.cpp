#include<iostream>
using namespace std;
//值传递  不改变实参
void swap01(int num1,int num2)
{
    int temp=num1;
    num1=num2;
    num2=temp;
}
//地址传递  可以改变实参
void swap02(int *p1,int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;//p1存的是a的地址，p2存的是b的地址，*p1解引用后是a的值，*p2解引用后是b的值
}
int main()
{
    int a=10,b=20;
    swap01(a,b);//值传递不会改变实参
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    swap02(&a,&b);//地址传递会改变实参
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}