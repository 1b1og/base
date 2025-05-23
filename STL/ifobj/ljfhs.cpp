#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

//逻辑仿函数    逻辑非logical_not

void test01()
{
    vector<bool>v;
    v.push_back(true);
    v.push_back(false);
    v.push_back(false);
    v.push_back(true);
    v.push_back(false);

    for(vector<bool>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;

    // 利用逻辑非 将容器v 搬到容器 v1中 ，并执行取反操作
    vector<bool> v1;
    v1.resize(v.size());

    transform(v.begin(),v.end(),v1.begin(),logical_not<bool>());

    for(vector<bool>::iterator it=v1.begin();it!=v1.end();it++)
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