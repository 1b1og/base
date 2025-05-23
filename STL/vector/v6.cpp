#include<iostream>
#include<vector>
using namespace std;

//vector互换容器

//1.基本使用
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
    vector<int>v2;
    for(int i=0;i<10;i++)
    {
        v1.push_back(i);
    }
    for(int i=10;i<20;i++)
    {
        v2.push_back(i);
    }
    cout<<"交换前："<<endl;
    printVector(v1);
    printVector(v2);
    v2.swap(v1);
    cout<<"交换后："<<endl;
    printVector(v1);
    printVector(v2);
}

//2.实际用途
//巧用swap可以收缩内存空间
void test02()
{
    vector<int>v;
    for(int i=0;i<100000;i++)
    {
        v.push_back(i);
    }
    cout<<"v的容量"<<v.capacity()<<endl;
    cout<<"v的大小"<<v.size()<<endl;

    v.resize(3);  //重新指定大小
    cout<<"v的容量"<<v.capacity()<<endl;
    cout<<"v的大小"<<v.size()<<endl;

    //巧用swap收缩内存
    vector<int>(v).swap(v);   //vector<int>(v) 匿名对象 和v进行交换 匿名对象指向原来v的内存 匿名对象执行之后 系统自动释放
    cout<<"v的容量"<<v.capacity()<<endl;
    cout<<"v的大小"<<v.size()<<endl;
}
int main()
{
    // test01();
    test02();
    return 0;
}