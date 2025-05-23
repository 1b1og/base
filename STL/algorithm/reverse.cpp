#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//常用排序算法 reverse 算法
// reverse(iterator beg,iterator end);
//反转指定范围内的元素

void myPrint(int val)
{
    cout<<val<<" ";
}
void test01()
{
    vector<int>v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }

    reverse(v.begin(),v.end());

    for_each(v.begin(),v.end(),myPrint);
}

int main()
{
    test01();
    return 0;
}