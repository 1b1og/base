#include<iostream>
#include<string>
using namespace std;
//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
class student
{
public://公共权限
//类中的属性和行为 我们统一称为 成员
//属性  成员属性/成员变量
//行为  成员函数/成员方法
    //属性
    string s_name;
    int s_id;
    void showstudent()
    {
        cout<<"姓名："<<s_name<<"\t"<<"学号："<<s_id<<endl;
    }
    //给姓名赋值
    void setname(string name)
    {
        s_name=name;
    }
    //给学号赋值
    void setid(int id)
    {
        s_id=id;
    }
};
int main()
{
    student s1;
    // s1.s_name="张三";
    s1.setname("张三");
    // s1.s_id=1;
    s1.setid(1);
    s1.showstudent();
    return 0;
}