#include<iostream>
using namespace std;
#include<string>
//const 在结构体中的使用场景
//学生结构体定义
struct student
{
    string name;
    int age;
    int score;
};
//使用指针可以减少使用内存空间，一个指针只占4个字节
void printstudent(const student * p)//常量指针 加const防止函数体中的误操作
{
    // p->age=100;  错误
    cout<<"姓名："<<p->name<<"年龄："<<p->age<<"分数："<<p->score<<endl;
}
int main()
{
    //创建结构体变量
    student s={"张三",18,90};
    //通过函数打印结构体信息
    printstudent(&s);
    return 0;
}