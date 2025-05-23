#include<iostream>
using namespace std;
#include<string>
#include<ctime>
//结构体案例
//学生结构体定义
struct student
{
    string sname;
    int score;
};
//老师结构体定义
struct teacher
{
    string tname;
    student sArray[5];
};
//给老师和学生信息赋值的函数
void allocateTea(teacher tArray[],int len)
{
     string nameSeed="ABCDE";
     for(int i=0;i<len;i++)
     {
        tArray[i].tname="Teacher_";
        tArray[i].tname+=nameSeed[i];
        for(int j=0;j<5;j++)
        {
            tArray[i].sArray[j].sname="Student_";
            tArray[i].sArray[j].sname+=nameSeed[j];
            int random=rand()%61+40; //随机数取值 这不会
            tArray[i].sArray[j].score=random;
        }
     }
}
//打印输出所有老师和学生的信息
void printTea(teacher tArray[0],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<"老师姓名："<<tArray[i].tname<<endl;
        for(int j=0;j<5;j++)
        {
        cout<<"学生姓名："<<tArray[i].sArray[j].sname<<"分数："<<tArray[i].sArray[j].score<<endl;
    }
}
}
int main()
{   
    //随机数种子
    srand((unsigned int)time(NULL));//这不会
    //创建三名老师的数组
    teacher tArray[3];
    //通过函数给三名老师的信息赋值，并给老师带的学生信息赋值
    int len=sizeof(tArray)/sizeof(tArray[0]);
    allocateTea(tArray,len);
    //打印所有老师及所带学生信息
    printTea(tArray,len);
    return 0;
}