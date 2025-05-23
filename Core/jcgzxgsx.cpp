#include<iostream>
using namespace std;
//继承中构造和析构的顺序
class Base
{
public:
    Base()
    {
        cout<<"Base的构造函数调用"<<endl;
    }
    ~Base()
    {
        cout<<"Base的析构函数调用"<<endl;
    }
};

class Son:public Base
{
public:
    Son()
    {
        cout<<"Son的构造函数调用"<<endl;
    }
    ~Son()
    {
        cout<<"Son的析构函数调用"<<endl;
    }
};

void test01()
{
    Son s;
}
int main()
{
    test01();
    return 0;
}