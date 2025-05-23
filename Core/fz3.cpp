#include<iostream>
#include<string>
using namespace std;
//访问权限有三种
// 1.public    公共权限  成员  类内可以访问   类外可以访问
// 2.protecte  保护权限  成员  类内可以访问   类外不可以访问  儿子可以访问父亲中的保护内容
// 3.privat    私有权限  成员  类内可以访问   类外不可以访问  儿子不可以访问父亲的私有内容

class Person
{
public:
    //公共权限
    string p_name;

protected:
    //保护权限
    string p_car;

private:
    //私有权限
    int  p_password;

public:
    void func()
    {
        p_name="张三";
        p_car="滴滴";
        p_password=123456;
        cout<<p_name<<endl;
        cout<<p_car<<endl;
        cout<<p_password<<endl;
    }
};
int main()
{
    Person p1;
    p1.p_name="李四";
    // p1.p_car="奔驰"; //保护权限在类外不能访问
    // p1.p_password=234567;  //私有类在类外不能访问
    p1.func();
    return 0;
}