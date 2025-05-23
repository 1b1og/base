#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

//关系仿函数 大于greater

class myCompare
{
public:
    bool operator()(int v1,int v2)
    {
        return v1>v2;
    }
};
void test01()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(20);
    v.push_back(50);
    v.push_back(30);

    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;

    //降序
    // sort(v.begin(),v.end(),myCompare());   //自己写的仿函数实现
    sort(v.begin(),v.end(),greater<int>());    //内建函数 需要包含头文件functional <>内的数据类型可以换 
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
}
int main()
{
    test01();
    return 0;
}