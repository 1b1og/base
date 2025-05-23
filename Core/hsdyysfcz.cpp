#include<iostream>
using namespace std;
//函数调用运算符重载

//打印输出类
class MyPrint
{
public:
    void operator()(string test)
    {
        cout<<test<<endl;
    }
};

void myprint2(string test)
{
    cout<<test<<endl;
}
void test01()
{
    MyPrint myprint;
    myprint("hello world"); //特别像函数调用 所以称为仿函数
    myprint2("Hello world");
}

//仿函数非常灵活 ，没有固定写法
//加法类

class MyAdd
{
public:
    int operator()(int a,int b)
    {
        return a+b;
    }
};
void test02()
{
    MyAdd myadd;
    int temp=myadd(100,200);
    cout<<"temp="<<temp<<endl;

    //匿名函数对象
    cout<<MyAdd()(100,200)<<endl;
}
int main()
{
    // test01();
    test02();
    return 0;
}