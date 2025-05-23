#include<iostream>
using namespace std;
//空指针调用成员函数

class Person
{
    public:

    void showClassName()
    {
        cout<<"this is Person class"<<endl;
    }

    void showPersonAge()
    {
        //报错原因是因为传入指针是为 NULL
        if(this==NULL)
        {
            return;
        } //加这段代码防止崩 判断指针为空直接返回
        cout<<"age="<<this->m_Age<<endl;
    }

    int m_Age;
};

void test01()
{
    Person *p=NULL;
    p->showClassName();
    p->showPersonAge();
}
int main()
{
    test01();
    return 0;
}