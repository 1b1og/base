#include<iostream>
using namespace std;
//引用做函数的返回值
//1.不要返回局部变量的引用
// int & test01() //用引用的方式返回
// {
//     int a =10;  //局部变量存放在四区中的 栈区
//     return a;
// }
//2.函数的调用可以作为左值
int & test02()
{
    static int a=10;  //静态变量 存放在全局区，全局区的数据在程序结束后系统释放
    return a;
}
int main()
{
    // int &ref=test01();
    // cout<<"ref="<<ref<<endl;//局部变量存放在栈区 函数执行结束后内存自动释放
    int &ref1=test02();
    cout<<"ref1="<<ref1<<endl;
    cout<<"ref1="<<ref1<<endl;
    test02()=1000;  //如果函数的返回值是引用，那么这个函数可以作为左值
    cout<<"ref1="<<ref1<<endl;

    return 0;
}