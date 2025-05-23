#include<iostream>
#include<map>
using namespace std;

//map查找和统计
void printMap(map<int,int>& m)
{
    for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
    {
        cout<<"key="<<(*it).first<<" "<<"value="<<(*it).second<<endl;
    }
}
void test01()
{
    //查找
    map<int,int>m;
    m.insert(make_pair(1,10));
    m.insert(make_pair(2,20));
    m.insert(make_pair(3,30));

    map<int,int>::iterator pos=m.find(2);

    if(pos!=m.end())
    {
        cout<<"查到了元素key="<<(*pos).first<<" "<<"value="<<(*pos).second<<endl;
    }
    else
    {
        cout<<"未找到元素"<<endl;
    }

    //统计
    //map不允许插入重复key元素，count统计 结果 只能是0或1
    //multimap的count统计结果可能大于1
    int num=m.count(3);
    cout<<"num="<<num<<endl;
}
int main()
{
    test01();
    return 0;
}