#include<iostream>
#include<map>
using namespace std;

//map大小和交换

void printMap(map<int,int>& m)
{
    for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
    {
        cout<<"key="<<(*it).first<<" "<<"value="<<(*it).second<<endl;
    }
}
void test01()
{
    map<int,int> m1;
    m1.insert(pair<int,int>(1,10));
    m1.insert(pair<int,int>(2,20));
    m1.insert(pair<int,int>(3,30));
    m1.insert(pair<int,int>(4,40));

    if(m1.empty())
    {
        cout<<"容器为空"<<endl;
    }
    else
    {
        cout<<"容器不为空"<<endl;
        cout<<"容器大小为："<<m1.size()<<endl;
        printMap(m1);
    }

    map<int,int> m2;
    m2.insert(pair<int,int>(1,50));
    m2.insert(pair<int,int>(2,60));
    m2.insert(pair<int,int>(3,70));
    m2.insert(pair<int,int>(4,80));

    cout<<"交换后："<<endl;
    m2.swap(m1);
    printMap(m1);
    printMap(m2);
}
int main()
{
    test01();
    return 0;
}