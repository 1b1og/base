#include<iostream>
#include<set>
using namespace std;

//set和multiset区别

void test01()
{
    set<int>s1;

    //插入数据
    pair<set<int>::iterator,bool> ret=s1.insert(10);  //pair<set<int>::iterator,bool>   是一个数据类型 
    if(ret.second)
    {
        cout<<"第一次插入成功"<<endl;
    }
    else
    {
        cout<<"第一次插入失败"<<endl;
    }
    
    ret=s1.insert(10);
    if(ret.second)
    {
        cout<<"第二次插入成功"<<endl;
    }
    else
    {
        cout<<"第二次插入失败"<<endl;
    }

    multiset<int>s2;
    //允许插入重复的值
    s2.insert(10);
    s2.insert(30);
    s2.insert(30);
    s2.insert(30);
    s2 .insert(20);

    for(multiset<int>::iterator it=s2.begin();it!=s2.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
}
int main()
{
    test01();
    return 0;
}