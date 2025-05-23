#include<iostream>
using namespace std;
#include<string>
//结构体数组  在主函数里定义
//语法： struct 结构体名 数组名[元素个数]={{},{},...{}}
//1.定义结构体
struct Student
{
    string name;
    int age;
    int score;
};

int main()
{
    //2.创建结构体数组
    struct Student stuarr[3]=
    {
        {"张三",18,100},
        {"李四",19,98},
        {"王五",20,99}
    };
    //3.给结构体数组中的元素赋值
    stuarr[2].age=21;//可以后期修改

    //4.遍历结构体数组
    for(int i=0;i<3;i++)
    {
        cout<<"姓名："<<stuarr[i].name<<"年龄："<<stuarr[i].age<<"分数："<<stuarr[i].score<<endl;
    }
    
    return 0;
}