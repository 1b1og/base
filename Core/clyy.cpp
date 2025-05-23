#include<iostream>
using namespace std;
//常量引用
void showvalue(const int &val)  //用来修饰形参 不能修改
{
    // val=1000;//  加const以后就不可修改
    cout<<"val="<<val<<endl;
}
int main()
{
    // int &ref=10;//引用本身需要一个合法的内存空间，因此这行错误
    //加入const就可以，编译器优化代码为 int temp=10; const int &ref=temp;
    const int &ref=10;
    // ref=100;//加入const后不可以修改变量
    cout<<"ref="<<ref<<endl;

    //函数中利用常量引用防止误操作修改实参
    int a=10;
    cout<<"a="<<a<<endl;
    showvalue(a);
    cout<<"a1="<<a<<endl;
    return 0;
}