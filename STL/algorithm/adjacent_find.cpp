#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

//常用查找算法  adjacent_find 算法
// adjacent_find(iterator beg,iterator end);
//查找相邻重复元素，返回相邻元素的第一个位置的迭代器 若未找到返回结束迭代器
//beg开始迭代器  end结束迭代器

void test01()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    // v.push_back(3);

    vector<int>::iterator it = adjacent_find(v.begin(),v.end());
    if(it==v.end())
    {
        cout<<"未找到该元素"<<endl;
    }
    else
    {
        cout<<"该重复元素："<<(*it)<<endl;
    }
}

int main()
{
    test01();
    return 0;
}