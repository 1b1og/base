#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//常用查找算法  count_if 算法
//按条件统计元素个数
// count_if(iterator beg,iterator end,_Pred);
//beg 开始迭代器 end结束迭代器 _Pred 谓词

//内置数据类型

class Greater20
{
public:
    bool operator()(int val)
    {
        return val>20;
    }
};
void test01()
{
    vector<int>v;
    v.push_back(30);
    v.push_back(20);
    v.push_back(40);
    v.push_back(30);
    v.push_back(10);
    v.push_back(40);
    v.push_back(30);

    int ret=count_if(v.begin(),v.end(),Greater20());
    cout<<ret<<endl;
}

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

//自定义数据类型

class ageGreater20
{
public:
    bool operator()(const Person &p)
    {
        return p.m_Age>20;
    }
};
void test02()
{
    vector<Person>v;
    Person p1("aaa",10);
    Person p2("aaa",20);
    Person p3("aaa",30);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);

    int ret =count_if(v.begin(),v.end(),ageGreater20());
    cout<<ret<<endl;
}
int main()
{
    test01();
    test02();
    return 0;
}