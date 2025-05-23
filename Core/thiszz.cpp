#include<iostream>
using namespace std;

// this 指针 指向被调用的成员函数所属的对象
// this 指针是隐含每一个非静态成员函数内的一种指针  不需要定义直接使用即可
// this指针的用途 
//1.当形参和成员变量同名时，可用this指针来区分  
//2.在类的非静态成员函数中返回对象本身，可使用 return *this

class Person
{
    public:
    Person(int age)
    {
        this->age=age; 
    }

    Person& Personaddage(Person & p)  //为什仫不返回Person ？？？
    {
        this->age+=p.age;  //this->age=this->age+p.age; 

        return *this;  //this指向p2的指针，而*this指向的就是p2这个对象本体
    }
    int age;  //年龄
};

//1.解决姓名冲突
void test01()
{
    Person p1(18);
    cout<<"p1的年龄为："<<p1.age<<endl;
}

//2.返回对象本身用*this
void test02()
{
    Person p1(10);
    Person p2(20);

    //链式编程思想
    p2.Personaddage(p1).Personaddage(p1).Personaddage(p1);
    cout<<"p2的年龄为："<<p2.age<<endl;
}
int main()
{
    test01();
    test02();
    return 0;
}