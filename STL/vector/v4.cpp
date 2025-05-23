#include<iostream>
#include<vector>
using namespace std;

//vector插入和删除
//vector 只能对单端进行插入和删除
void printVector(vector<int> &v)
{
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
}
void test01()
{
    vector<int>v1;
    for(int i=0;i<10;i++)
    {
        v1.push_back(i);   //尾部插入元素
    }
    printVector(v1);

    v1.pop_back();    //删除最后一个元素
    printVector(v1);

    //插入    参数1位置必须提供一个迭代器
    v1.insert(v1.end(),100);
    printVector(v1);

    //重载版本
    v1.insert(v1.begin(),2,1000);
    printVector(v1);

    //删除  参数也是迭代器
    v1.erase(v1.begin());
    printVector(v1);

    //清空容器
    // v1.erase(v1.begin(),v1.end());
    v1.clear();  //内部提供的清空容器函数
    printVector(v1);
}
int main()
{
    test01();
    return 0;
}