#include<iostream>
using namespace std;
int main()
{
    //野指针
    int* p=(int *)0x1100;//0x1100是一个十六进制的数 加int* 强制转换成指针类型
    //访问野指针报错
    cout<<*p<<endl;
    return 0;
}