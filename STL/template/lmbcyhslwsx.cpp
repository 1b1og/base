#include<iostream>
using namespace std;
//类模板成员函数类外实现
template<class T1,class T2>
class Person
{
public:
    Person(T1 name,T2 age);
    // {
    //     this->m_Age=age;
    //     this->m_Name=name;
    // }
    void showPerson();
    // {
    //     cout<<"name="<<this->m_Name<<" "<<"age="<<this->m_Age<<endl;
    // }
    T1 m_Name;
    T2 m_Age;
};

//构造函数类外实现
template<class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age) //作用域后要写模板参数列表，编译器才知道是类模板的构造函数
{
    this->m_Age=age;
    this->m_Name=name;
}

//成员函数的类外实现
template<class T1,class T2>
void Person<T1,T2>::showPerson()
{
    cout<<"name="<<this->m_Name<<" "<<"age="<<this->m_Age<<endl;
}

void test01()
{
    Person<string,int>p("张三",100);
    p.showPerson();
}
int main()
{
    test01();
    return 0;
}