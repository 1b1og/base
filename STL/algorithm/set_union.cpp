#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//常用集合算法 set_union  算法
// set_union(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);
//beg1 容器1开始迭代器  end1 容器1结束迭代器  beg2 容器2开始迭代器  end2 容器2结束迭代器  dest 目标容器开始迭代器

void myPrint(int val)
{
    cout<<val<<" ";
}
void test01()
{
    vector<int>v1;
    vector<int>v2;

    for(int i=0;i<10;i++)
    {
        v1.push_back(i);
    }

    for(int i=10;i<15;i++)
    {
        v2.push_back(i);
    }

    vector<int>vTarget;
    //新容器提前开辟空间 
    //最特殊情况 没有公共元素 开辟空间 两个容器的长度和
    vTarget.resize(v1.size()+v2.size());

    //返回值是交集中最后一个元素的迭代器
    vector<int>::iterator itEnd = set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());

    for_each(vTarget.begin(),itEnd,myPrint);
}

int main()
{
    test01();
    return 0;
}