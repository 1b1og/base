#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

//常用查找算法 find_if 算法
// find_if(iterator beg,iterator end,_Pred)
//按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
//beg开始迭代器
//end结束迭代器
//_Pred函数或者谓词(返回bool类型的仿函数)

class myFind
{
public:
    bool operator()(int val)
    {
        return val>5;
    }
};
//内置数据类型
void test01()
{
    vector<int>v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }

    vector<int>::iterator it=find_if(v.begin(),v.end(),myFind());
    if(it==v.end())
    {
        cout<<"未找到该元素"<<endl;
    }
    else
    {
        cout<<"该元素位置："<<(*it)<<endl;
    }
}

//自定义数据类型
class Person
{
public:
    Person(string name,int age)
    {
        this->m_Age=age;
        this->m_Name=name;
    }
    string m_Name;
    int m_Age;
};

class myFind1
{
public:
    bool operator()(Person &p)
    {
        return p.m_Age>20;
    }
};
void test02()
{
    vector<Person>v;
    Person p1("aaa",10);
    Person p2("bbb",20);
    Person p3("ccc",30);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);

    vector<Person>::iterator it=find_if(v.begin(),v.end(),myFind1());
    if(it==v.end())
    {
        cout<<"未找到该元素"<<endl;
    }
    else
    {
        cout<<"该元素姓名："<<(*it).m_Name<<" "<<"年龄："<<(*it).m_Age<<endl;
    }
}

int main()
{
    test01();
    test02();
    return 0;
}