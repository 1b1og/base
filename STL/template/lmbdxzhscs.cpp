#include<iostream>
using namespace std;

//类模板对象做函数参数

template<class T1 ,class T2>
class Person
{
public:
    Person(T1 name,T2 age)
    {
        this->m_Age=age;
        this->m_Name=name;
    }
    void showPerson()
    {
        cout<<"姓名："<<this->m_Name<<"\t"<<"年龄："<<this->m_Age<<endl;
    }
    T1 m_Name;
    T2 m_Age;
};

//1.指定传入类型  使用广泛

void printPerson1(Person<string,int>&p)
{
    p.showPerson();
}
void test01()
{
    Person<string,int>p1("张三",100); 
    printPerson1(p1);
}
//2.参数模板化
template<class T1,class T2>
void printPerson2(Person<T1,T2>&p)
{
    p.showPerson();
    cout<<"T1的类型："<<typeid(T1).name()<<endl;  //typeid().name()可以查看数据类型
    cout<<"T2的类型："<<typeid(T2).name()<<endl;
}

void test02()
{
    Person<string,int>p1("张三",100);
    printPerson2(p1);
}
//3.整个类模板化
template<class T>
void printPerson3(T &p)
{
    p.showPerson();
}
void test03()
{
    Person<string,int>p1("张三",100);
    printPerson3(p1);
}
int main()
{
    // test01();
    // test02();
    test03();
    return 0;
}