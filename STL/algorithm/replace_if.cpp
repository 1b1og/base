#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//常用替换算法 replace_if 算法
//按条件替换元素，满足条件的替换成指定元素 利用仿函数可以灵活筛选满足条件
// replace_if(iterator beg,iterator end,_Pred,newvalue);
//beg 开始迭代器 end 结束迭代器 _Pred 谓词 newvalue 新元素

class myPrint
{
public:
    void operator()(int val)
    {
        cout<< val<<" ";
    }
};

class Greater5
{
public:
    bool operator()(int val)
    {
        return val>5;
    }
};
void test01()
{
    vector<int>v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }

    cout<<"替换前："<<endl;
    for_each(v.begin(),v.end(),myPrint());
    cout<<endl;
    replace_if(v.begin(),v.end(),Greater5(),1);
    cout<<"替换后："<<endl;

    for_each(v.begin(),v.end(),myPrint());
}

int main()
{
    test01();
    return 0;
}