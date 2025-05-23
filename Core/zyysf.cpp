#include<iostream>
using namespace std;
//左移运算符  <<
//重载左移运算符配合友元可以实现输出自定义数据类型
class Person
{
public:
    friend ostream & operator<<(ostream & cout,Person &p);
    Person (int a,int b)
    {
        m_a=a;
        m_b=b;
    }
private:

    //利用成员函数重载 左移运算符  p.operator(cout)  简化为 p << cout
    //通常不会用成员函数重载<<运算符，因为无法实现cout在左侧
    // void operator<<(cout)
    // {

    // }
    int m_a;
    int m_b;
};

//只能利用全局函数重载<<运算符
ostream & operator<<(ostream & cout,Person &p) //本质 oeprator <<(cout ,p) 简化为 cout << p
// ostream 标准输出流 数据类型
{
    cout<<"m_a="<<p.m_a<<"\t"<<"m_b="<<p.m_b<<endl;
    return cout;
}
void test01()
{
    Person p(10,20);
    // p.m_a=10;
    // p.m_b=20;
    cout<<p<<"Hello Vscode!"<<endl;
}
int main()
{
    test01();
    return 0;
}