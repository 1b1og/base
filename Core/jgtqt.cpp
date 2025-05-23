#include<iostream>
using namespace std;
#include<string>
//结构体嵌套结构体
//结构体中的成员可以是另一个结构体
//eg.每个老师辅导一个学生，一个老师的结构体中，记录一个学生的结构体
//学生结构体定义
struct Student
{
    string name;
    int age;
    int score;
};

//教师结构体定义
struct Teacher
{
    string name;
    int id;
    int age;
    struct Student stu;
};

int main()
{
    //创建老师
    Teacher t;
    t.age=60;
    t.id=11111;
    t.name="老王";
    t.stu.age=18;//结构体嵌套的结构体要用.一层一层访问
    t.stu.name="张三";
    t.stu.score=20;
    // Teacher t={"老王",11111,60,{"张三",18,20}};  可以这么创建
    cout<<"老师姓名："<<t.name<<"年龄："<<t.age<<"编号："<<t.id<<"老师学生姓名："<<t.stu.name<<"年龄："<<t.stu.age<<"分数："<<t.stu.score<<endl;
    return 0;
}