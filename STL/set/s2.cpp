#include<iostream>
#include<set>
using namespace std;

//set大小和交换

void printSet(set<int> &s)
{
    for(set<int>::iterator it=s.begin();it!=s.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
}
void test01()
{
    set<int>s1;
    for(int i=0;i<5;i++)
    {
        s1.insert(i);
    }
    if(!s1.empty())
    {
        cout<<"容器不为空"<<endl;
        printSet(s1);
        cout<<"容器大小为："<<s1.size()<<endl;
    }
    else
    {
        cout<<"容器为空"<<endl;
    }

    set<int>s2;
    for(int i=5;i<10;i++)
    {
        s2.insert(i);
    }

    cout<<"交换前："<<endl;
    printSet(s1);
    printSet(s2);
    cout<<"交换后："<<endl;
    s2.swap(s1);
    printSet(s1);
    printSet(s2);

}
int main()
{
    test01();
    return 0;
}