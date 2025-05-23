#include<iostream>
using namespace std;
//关系运算符重载
class Person
{
public:
    Person (string name,int age)
    {
        this->m_age=age;
        this->m_name=name;
    }

    //重载关系运算符
    bool operator==(Person &p)
    {
        if(p.m_age==this->m_age && p.m_name==this->m_name)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
    string m_name;
    int m_age;
};
void test01()
{
    Person p1("Tom",18);
    Person p2("Tom",18);
    if(p1==p2)
    {
        cout<<"p1和p2是相等的！"<<endl;
    }
    else 
    {
        cout<<"p1和p2是不相等的！"<<endl;
    }
}
int main()
{
    test01();
    return 0;
}