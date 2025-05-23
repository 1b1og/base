#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//常用遍历算法  for_each 算法

//普通函数
void print01(int val)
{
    cout<<val<<" ";
}

//仿函数
class Myprint
{
public:
    void operator()(int val)
    {
        cout<<val<<" ";
    }
};
void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(20);
    v.push_back(50);
    v.push_back(30);

    for_each(v.begin(),v.end(),print01);    //普通函数放函数名即可
    cout<<endl;

    for_each(v.begin(),v.end(),Myprint());  //仿函数要放匿名对象
    cout<<endl;

}
int main()
{
    test01();
    return 0;
}