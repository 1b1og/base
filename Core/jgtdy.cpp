#include<iostream>
#include<string>
using namespace std;

//1.创建学生数据类型：学生包括（姓名，年龄，分数）
//自定义数据类型，一些类型集合组成的一个类型
//语法 struct 类型名称{成员列表}
struct Student  //结构体定义 struct 不可以省略  结构体创建 struct 可以省略(c++中)
{
    //成员列表
    //姓名
    string name;
    //年龄
    int age;
    //分数
    double score;
}s3;  //3.顺便创建的结构体变量 不建议使用

//2.通过类型创建具体学生
int main()
{

//2.1 struct Student s1
    struct Student s1;//结构体创建 struct 可以省略
    //给s1属性赋值，通过.访问结构体变量中的属性
    s1.name="张三";
    s1.age=18;
    s1.score=100.00;
    cout<<"s1 "<<"姓名："<<s1.name<<"年龄："<<s1.age<<"分数："<<s1.score<<endl;
//2.2 struct Student s2={...}
    Student s2={"李四",19,98.01};//省略 struct
    cout<<"s2 "<<"姓名："<<s2.name<<"年龄："<<s2.age<<"分数："<<s2.score<<endl;
//2.3 在定义结构体时顺便创建结构体变量
    s3={"王五",20,89.90};
    cout<<"s3 "<<"姓名："<<s3.name<<"年龄："<<s3.age<<"分数："<<s3.score<<endl;
    return 0;
}