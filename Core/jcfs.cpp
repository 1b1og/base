#include<iostream>
using namespace std;
//公共继承
class Base1
{
public:
    int m_a;
protected:
    int m_b;
private:
    int m_c;
};

class Son1:public Base1//公共继承父类中成员访问权限不变
{
public:
    void func1()
    {
        m_a=10;//父类中公共成员 子类还是公共成员 
        m_b=10;//父类中保护成员 子类还是保护成员
        // m_c=10;//父类中私有成员 子类不可以访问
    }
};
//保护继承
class Base2
{
public:
    int m_a;
protected:
    int m_b;
private:
    int m_c;
};
class Son2:protected Base2
{
public:
    void func2()
    {
        m_a=10;//父类中公共成员 子类变保护成员
        m_b=10;//父类中保护成员 子类还是保护成员
        // m_c=10;//父类中私有成员 子类不可以访问
    }
};

//私有继承
class Base3
{
public:
    int m_a;
protected:
    int m_b;
private:
    int m_c;
};

class Son3:private Base3
{
public:
    void func3()
    {
        m_a=10;//父类中公共成员 子类中变私有成员
        m_b=10;//父类中保护成员 子类中变私有成员
        // m_c=10;//父类中私有成员 子类不可以访问
    }
};

class GrandSon3:private Son3
{
public:
    void func4()
    {
        // m_a=100;  //到Son3中m_a,m_b已经变成私有成员 所以Son3的子类不可以访问
        // m_b=100;
    }
};
void test01()
{
    //公共继承
    Son1 s1;
    s1.m_a=100;
    cout<<s1.m_a<<endl;
    // s1.m_b=100;//保护权限类外不可以访问

    //保护继承
    Son2 s2;
    // s2.m_a=100;//保护权限类外不可以访问

    //私有继承
    Son3 s3;
    // s3.m_a=100; //私有成员 类外不可以访问
}
int main()
{
    test01();
    return 0;
}