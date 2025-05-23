#include<iostream>
using namespace std;
//运算符重载概念：对已有运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型
//加号运算符重载
class Person 
{
    public:
    Person (){}
    //成员函数实现加号重载
    // Person operator+(const Person&p)
    // {
    //     Person temp;
    //     temp.m_a=this->m_a+p.m_a;
    //     temp.m_b=this->m_b+p.m_b;
    //     return temp;
    // }
    
    
    // private:
    int m_a;
    int m_b;
};

//全局函数实现加号重载

Person operator+(Person &p1,Person &p2)
{
    Person temp;
    temp.m_a=p1.m_a+p2.m_a;
    temp.m_b=p1.m_b+p2.m_b;
    return temp;
}

//运算符重载实现函数重载
Person operator+(Person &p,int a)
{
    Person temp;
    temp.m_a=p.m_a+a;
    temp.m_b=p.m_b+a;
    return temp;
}
void test01()
{
    Person p1;
    p1.m_a=10;
    p1.m_b=10;
    Person p2;
    p2.m_a=100;
    p2.m_b=200;
    //成员函数实现加号重载
    // Person p3=p1+p2; //本质为 Person p3=p1.operator+(p2);  简化为 Person p3=p1+p2;
    //全局函数实现加号重载
    Person p3=p1+p2;  //本质为 Person p3=operator+(p1,p2);  简化为 Person p3= p1+p2;
    cout<<"p3.m_a="<<p3.m_a<<endl;
    cout<<"p3.m_b="<<p3.m_b<<endl;

    //运算符重载也可以发生函数重载
    Person p4=p2+20; //本质为 Person p4=operator+(p2,10); 简化为 Person p4 =p2 +10;
    cout<<"p4.m_a="<<p4.m_a<<endl;
    cout<<"p4.m_b="<<p4.m_b<<endl;
}
int main()
{
    test01();
    return 0;
}