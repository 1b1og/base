#include<iostream>
using namespace std;
//纯虚函数和抽象类
class Base
{
public:
    //纯虚函数
    //只要有一个纯虚函数，这个类称为抽象类
    //抽象类特点：
    //无法实例化对象
    //抽象类的子类必须重写父类的纯虚函数，否则子类也是抽象类
    virtual void func()=0;
};

class Son:public Base
{
public:
    void func()
    {
        cout<<"func()调用"<<endl;
    }
};

void test01()
{
    // Base b;//抽象类不可以实例化对象
    Base *b=new Son;
    b->func();
    delete b;
}
int main()
{
    test01();
    return 0;
}