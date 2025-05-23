#include<iostream>
using namespace std;
#include<string>
//结构体指针
struct Student
{
    string name;
    int age;
    int score;
};

int main()
{
    //1.创建结构体变量
    Student s1={"张三",18,100};
    //2.通过指针指向结构体变量
    Student * p=&s1;//前后的指针类型应该是一样的 不能用int * 定义结构体指针 
    //3.通过指针访问结构体变量中的数据 如： p->age
    //通过结构体指针访问结构体中的属性  需要利用 '->'访问结构体中成员
    cout<<"姓名："<<p->name<<"年龄："<<p->age<<"分数："<<p->score<<endl;
    return 0;
}