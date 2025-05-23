#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//常用拷贝算法 copy 算法
// copy(iterator beg,iterator end,iterator dest);
//beg 开始迭代器 end 结束迭代器   dest 目标容器开始迭代器

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

    v2.resize(v1.size());   //提前开辟空间！

    copy(v1.begin(),v1.end(),v2.begin());

    for_each(v2.begin(),v2.end(),myPrint);

}

int main()
{
    test01();
    return 0;
}