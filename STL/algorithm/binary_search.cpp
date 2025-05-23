#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//常用查找算法   binary_search算法 二分查找 在无序序列中不可用
// bool binary_search(iterator beg,iterator end,value);
// 查找指定的元素 查到返回true 否则返回false
// value查找的元素
void test01()
{
    vector<int>v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }

    //注意；容器中必须是有序的序列
    bool ret= binary_search(v.begin(),v.end(),3);

    if(ret)
    {
        cout<<"该元素存在"<<endl;
    }
    else
    {
        cout<<"该元素不存在"<<endl;
    }
}

int main()
{
    test01();
    return 0;
}