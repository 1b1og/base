#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

//常用查找算法  find 算法
// find(iterator beg,iterator end,value);
//按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器
//beg开始迭代器
//end结束迭代器
//value查找的元素

//查找内置数据类型
void test01()
{
    vector<int>v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }

    vector<int>::iterator it=find(v.begin(),v.end(),4);    //未找到返回结束迭代器，找到返回当前元素位置迭代器
    if(it==v.end())
    {
        cout<<"未找到该元素"<<endl;
    }
    else
    {
        cout<<"该元素位置："<<(*it)<<endl;
    }
}

class Person
{
public:
    Person(string name,int age)
    {
        this->m_Name=name;
        this->m_Age=age;
    }

    //自定义数据类型需要重载==运算符  让底层find知道如何对比Person数据类型 
    bool operator==(const Person &p) 
    {
        if(this->m_Age==p.m_Age&&this->m_Name==p.m_Name)
           return true;
        else 
           return false;
    }
    string  m_Name;
    int m_Age;
};
//查找自定义数据类型
void test02()
{
    vector<Person>v;
    //创建数据
    Person p1("张三",18);
    Person p2("李四",19);
    Person p3("王五",20);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);

    vector<Person>::iterator it=find(v.begin(),v.end(),p2);

    if(it==v.end())
    {
        cout<<"未找到该元素"<<endl;
    }
    else
    {
        cout<<"姓名："<<(*it).m_Name<<" "<<"年龄："<<(*it).m_Age<<endl;

    }
}
int main()
{
    test01();
    test02();
    return 0;
}