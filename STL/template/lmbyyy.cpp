#include<iostream>
#include<string>
using namespace std;
//类模板与友元
//建议全局函数做类内实现，用法简单，而且编译器可以直接识别
//提前让编译器知道Person类的存在
template<class T1,class T2>
class Person;

//2.全局函数在类外实现  类外实现要提前让编译器知道函数的实现
template<class T1,class T2>
void showPerson1(Person<T1,T2> p) //全局函数不需要加作用域
{
    cout<<"类外实现name="<<p.m_Name<<" "<<"age="<<p.m_Age<<endl;
}
//通过全局函数 打印Person信息
template<class T1,class T2>
class Person
{

    //全局函数 类内实现
    friend void showPerson(Person<T1,T2> p)
    {
        cout<<"name="<<p.m_Name<<" "<<"age="<<p.m_Age<<endl;
    }

    //全局函数 类外实现
    //加空模板参数列表  下边函数实现才知道是类模板的函数实现 
    //如果全局函数是类外实现，需要让编译器提前知道这个函数的存在
    friend void showPerson1<>(Person<T1,T2> p);

public:
    Person(T1 name, T2 age)
    {
        this->m_Age=age;
        this->m_Name=name;
    }

private:
    T1 m_Name;
    T2 m_Age;
};

//1.全局函数在类内实现
void test01()
{
    Person<string,int> p("Tom",20);
    showPerson(p);
}



void test02()
{
    Person<string,int> p("Tom",19);
    showPerson1(p);
}
int main()
{
    // test01();
    test02();
    return 0;
}