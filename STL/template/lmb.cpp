#include<iostream>
#include<string>
using namespace std;

//类模板
template<class NameType, class AgeType>
class Person
{
public:
    Person(NameType name,AgeType age)
    {
        this->m_Age=age;
        this->m_Name=name;
    }
    void showPerson()
    {
        cout<<"name:"<<this->m_Name<<" "<<"age="<<this->m_Age<<endl;
    }
    NameType m_Name ;
    AgeType m_Age;
};

void test01()
{
    //指定 NameType为string 类型  AgeType为int类型
    Person<string,int> p1("zhangsan",100);
    p1.showPerson();
}
int main()
{
    test01();
    return 0;
}