#include<iostream>
#include<set>
using namespace std;

//set查找和统计
void printSet(const set<int>& s)
{
    for(set<int>::const_iterator it=s.begin();it!=s.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
}
void test01()
{
    set<int>s1;

    //插入
    s1.insert(10);
    s1.insert(30);
    s1.insert(30);
    s1.insert(30);
    s1.insert(20);

    //遍历
    printSet(s1);

    //查找
    set<int>::iterator pos=s1.find(200);   //find函数返回的是一个迭代器

    if(pos!=s1.end())
    {
        cout<<"找到元素："<<(*pos)<<endl;   //迭代器本质就是指针
    }
    else
    {
        cout<<"未找到元素"<<endl;
    }

    //统计
    int num=s1.count(30);
    //对于set而言 统计结果只有0或1 因为不允许有重复元素存在
    cout<<"num="<<num<<endl;
}
int main()
{
    test01();
    return 0;
}