#include<iostream>
using namespace std;

//类模板分文件编写问题以及解决
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

template<class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age)
{
    this->m_Age=age;
    this->m_Name=name;
}

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