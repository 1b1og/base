#include<iostream>
using namespace std;
#include<string>
struct hero
{
    string name;
    int age;
    string sex;
};
void bubblesort(hero heroArray[],int len)
{
     for(int i=0;i<len-1;i++)
     {
        for(int j=0;j<len-1-i;j++)
        {
            if(heroArray[j].age>heroArray[j+1].age)
            {
                hero temp=heroArray[j];
                heroArray[j]=heroArray[j+1];
                heroArray[j+1]=temp; //不能设置一个int temp交换年龄  应该设一个结构体变量 交换数组里每一个结构体 
                // 要是只交换年龄 结构体变量就会改变
            }
        }
     }
}
void printhero(hero heroArray[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<"姓名："<<heroArray[i].name<<" 年龄："<<heroArray[i].age<<" 性别："<<heroArray[i].sex<<endl;
    }
}
int main()
{
    hero heroArray[5]=
    {{"刘备",23,"男"},
    {"关羽",22,"男"},
    {"张飞",20,"男"},
    {"赵云",21,"男"},
    {"貂蝉",19,"女"}};
    int len=sizeof(heroArray)/sizeof(heroArray[0]);
    bubblesort(heroArray,len);
    printhero(heroArray,len);
    return 0;
}