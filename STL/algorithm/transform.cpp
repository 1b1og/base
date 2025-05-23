#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//遍历算法 transform 算法 搬运容器到另一个容器中
// transform(iterator beg1,iterator end1,iterator beg2,_func);
// beg1 原容器开始迭代器
// end1 原容器结束迭代器
// beg2 目标容器开始迭代器
// _func 函数或者函数对象

class myTransform
{
public:
    int operator()(int val)
    {
        return val+10;
    }
};

class myPrint
{
public:
    void  operator()(int val)
    {
        cout<<val<<" ";
    }
};
void test01()
{
    vector<int >v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }

    vector<int> vTarget;  //目标容器
    vTarget.resize(v.size());   //  目标容器需要提前开辟空间，否则无法正常搬运

    transform(v.begin(),v.end(),vTarget.begin(),myTransform());

    for_each(vTarget.begin(),vTarget.end(),myPrint());
    cout<<endl;
}

int main()
{
    test01();
    return 0;
}