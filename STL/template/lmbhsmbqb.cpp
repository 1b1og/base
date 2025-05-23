#include<iostream>
using namespace std;

//类模板与函数模板的区别

template<class NameType,class AgeType=int>  //只有类模板可以在模板参数列表中有默认参数
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
        cout<<"name="<<this->m_Name<<" "<<"age="<<this->m_Age<<endl;
    }
    NameType m_Name;
    AgeType m_Age;
};

//1.类模板没有自动类型推导的使用方式
void test01()
{
    // Person p("张三",100); //错误，无法自动类型推导
    Person<string,int> p1("张三",100);  //正确  只能用显示指定类型
    p1.showPerson();
}

//2.类模板在模板参数列表中可以有默认参数
void test02()
{
    Person<string> p2("李四",200); // 模板参数列表中定义了AgeType =int 这里可以省略
    p2.showPerson();
}
int main()
{
    // test01();
    test02();
    return 0;
}