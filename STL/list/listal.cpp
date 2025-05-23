#include<iostream>
#include<list>
using namespace std;

//list案例

class Person
{
public:
    Person(string name,int age,int height)
    {
        this->m_Name=name;
        this->m_Age=age;
        this->m_Height=height;
    }


    int m_Age;      //年龄
    string m_Name;  //姓名
    int m_Height;   //身高
};

void printList(const list<Person> & L)
{
    for(list<Person>::const_iterator it=L.begin();it!=L.end();it++)
    {
        cout<<"姓名为："<<(*it).m_Name<<"年龄为："<<(*it).m_Age<<"身高为："<<(*it).m_Height<<endl;
    }
}

//指定排序规则
bool compare(Person &p1,Person &p2)
{
    if(p1.m_Age!=p2.m_Age)
        return p1.m_Age<p2.m_Age;
    else 
        return p1.m_Height>p2.m_Height;
}
void test01()
{
    Person p1("张三",18,180);
    Person p2("李四",19,178);
    Person p3("王五",20,182);
    Person p4("赵六",19,181);

    list<Person>L;
    L.push_back(p1);
    L.push_back(p2);
    L.push_back(p3);
    L.push_back(p4);

    cout<<"排序前："<<endl;
    printList(L);

    cout<<"排序后："<<endl;
    L.sort(compare);
    printList(L);
}
int main()
{
    test01();
    return 0;
}