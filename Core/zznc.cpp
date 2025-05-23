#include<iostream>
using namespace std;
int main()
{
    //指针所占内存空间
    int a=10;
    // int* p;
    // p=&a;
    int* p=&a;//7 8 行可以合并成 第9行
    cout<<"int *所占内存空间为："<<sizeof(int *)<<endl;//32位操作系统指针占4个字节，64位操作系统指针占8个字节
    //sizeof(int *)和sizeof(p)一样
    return 0;
}