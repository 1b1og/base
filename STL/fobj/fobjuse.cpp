#include<iostream>
#include<string>
using namespace std;

//函数对象使用 （仿函数）

class myAdd
{
public:
    int operator()(int v1,int v2)
    {
        return v1+v2;
    }
};
// 1.函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值；
void test01()
{
    myAdd mad;
    cout<<mad(10,10)<<endl;
}

// 2.函数对象超出普通函数的概念，函数对象可以有自己的状态；
class myPrint
{
public:
    myPrint()
    {
        this->count=0;
    }

    void operator()(string test)
    {
        cout<<test<<endl;
        this->count++;
    }

    int count;  //记录内部状态
};

void test02()
{
    myPrint mp;
    mp("hello world");
    mp("hello world");
    mp("hello world");

    cout<<"myPrint调用次数为："<<mp.count<<endl;
}

// 3.函数对象可以作为参数传递
void doPrint(myPrint &mp,string test)
{
    mp(test);
}
void test03()
{
    myPrint mp;
    doPrint(mp,"hello vscode");
}
int main()
{
    test01();
    test02();
    test03();
    return 0;
}