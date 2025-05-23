#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//常用排序算法 merge 算法
// merge(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);
//容器元素合并，并存储到另一个容器中
//注意：两个容器必须是有序的
//beg1 容器1开始迭代器  end1 容器1结束迭代器  beg2 容器2开始迭代器  end2 容器2结束迭代器  dest 目标容器开始迭代器

void myPrint(int val)
{
    cout<<val<<" ";
}
void test01()
{
    vector<int>v1;
    for(int i=0;i<5;i++)
    {
        v1.push_back(i);
    }

    vector<int>v2;
    for(int i=5;i<10;i++)
    {
        v2.push_back(i);
    }


    //目标容器
    vector<int>v3;
    v3.resize(v1.size()+v2.size());   //提前给目标容器分配空间 一定要记住！！！

    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());

    for_each(v3.begin(),v3.end(),myPrint);
}

int main()
{
    test01();
    return 0;
}