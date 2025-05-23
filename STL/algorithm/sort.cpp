#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

//常用排序算法 sort 算法
// sort(iterator beg,iterator end,_Pred);
//beg 开始迭代器 end 结束迭代器 _Pred谓词

void myPrint(int val)
{
    cout<<val<<" ";
}
void test01()
{
    vector<int>v;
    v.push_back(30);
    v.push_back(20);
    v.push_back(40);
    v.push_back(30);
    v.push_back(10);
    v.push_back(40);
    v.push_back(30);

    //升序
    sort(v.begin(),v.end());
    for_each(v.begin(),v.end(),myPrint);
    cout<<endl;

    //降序
    sort(v.begin(),v.end(),greater<int>());   //内建函数对象实现 也可以自己写一个仿函数实现
    for_each(v.begin(),v.end(),myPrint);
    cout<<endl;
}

int main()
{
    test01();
    return 0;
}
