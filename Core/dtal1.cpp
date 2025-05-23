#include<iostream>
#include<string>
using namespace std;
//普通实现计算器
class Calculator
{
public:
    int getresult(string oper)
    {
        if(oper=="+")
        {
            return num1+num2;
        }
        else if(oper=="-")
        {
            return num1-num2;
        }
        else if(oper=="*")
        {
            return num1*num2;
        }
    }
    //如果提供新的运算，需要修改源码
    int num1;
    int num2;
};
void test01()
{
    Calculator c;
    c.num1=10;
    c.num2=10;
    cout<<c.num1<<"+"<<c.num2<<"="<<c.getresult("+")<<endl;
    cout<<c.num1<<"-"<<c.num2<<"="<<c.getresult("-")<<endl;
    cout<<c.num1<<"*"<<c.num2<<"="<<c.getresult("*")<<endl;
}

//多态实现计算器
class Calculator1
{
public:
    virtual int getresult()
    {
        return 0;
    }
    int num1;
    int num2;
};
//加法类
class AddCalculator1:public Calculator1
{
public:
    int getresult()
    {
        return num1+num2;
    }
};
//减法类
class SubCalculator1:public Calculator1
{
public:
    int getresult()
    {
        return num1-num2;
    }
};
//乘法类
class MulCalculator1:public Calculator1
{
public:
    int getresult()
    {
        return num1*num2;
    }
};

void test02()
{
    //实现加法
    Calculator1 *c1=new AddCalculator1;
    c1->num1=100;
    c1->num2=100;
    cout<<c1->num1<<"+"<<c1->num2<<"="<<c1->getresult()<<endl;
    delete c1;

    //实现减法
    c1=new SubCalculator1;
    c1->num1=100;
    c1->num2=100;
    cout<<c1->num1<<"-"<<c1->num2<<"="<<c1->getresult()<<endl;
    delete c1;

    //实现乘法
    c1=new MulCalculator1;
    c1->num1=100;
    c1->num2=100;
    cout<<c1->num1<<"*"<<c1->num2<<"="<<c1->getresult()<<endl;
    delete c1;
}
int main()
{
    // test01();
    test02();
    return 0;
}