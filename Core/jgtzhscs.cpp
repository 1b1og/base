#include<iostream>
using namespace std;
#include<string>
//结构体做函数参数
//定义学生结构体
struct student
{
    string name;
    int age;
    int score;
};
//打印学生信息
//1.值传递
void printstudent1(student s)
{
    cout<<"printstudent1中打印姓名："<<s.name<<"年龄："<<s.age<<"分数："<<s.score<<endl;
}

//2.地址传递
void printstudent2(student *p)
{
    cout<<"printstudent2中打印姓名："<<p->name<<"年龄："<<p->age<<"分数："<<p->score<<endl;
}
//值传递不会改变实参 地址传递会改变实参 跟之前的是一个道理
int main()
{
    //结构体做函数参数
    //创建结构体变量
    student s={"张三",18,90};
     //将学生传入到一个参数中，打印学生身上的所有信息
    printstudent1(s);
    printstudent2(&s);
    cout<<"main中打印姓名："<<s.name<<"年龄："<<s.age<<"分数："<<s.score<<endl;
    return 0;
}