#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//常用查找算法 count算法
// count(iterator beg,iterator end,value);
// 统计元素出现次数
//beg开始迭代器  结束迭代器 value统计的元素

//内置数据类型
void test01()
{
    vector<int>v;
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

    int ret=count(v.begin(),v.end(),0);
    cout<<ret<<endl;
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

    bool operator==(const Person &p)
    {
        if(this->m_Age==p.m_Age&&this->m_Name==p.m_Name)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};

void test02()
{
    vector<Person>v;
    Person p1("aaa",10);
    Person p2("aaa",10);
    Person p3("aaa",10);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);

    int ret=count(v.begin(),v.end(),p1);
    cout<<ret<<endl;

}
int main()
{
    test01();
    test02();
    return 0;
}
