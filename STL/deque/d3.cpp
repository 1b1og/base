#include<iostream>
#include<deque>
using namespace std;

//deque大小操作
//deque 没有容量可以无限扩
void printDeque(deque<int> &d)
{
    for(int i=0;i<d.size();i++)
    {
        cout<<d.at(i)<<" ";
    }
    cout<<endl;
}
void test01()
{
    deque<int>d1;
    for(int i=0;i<10;i++)
    {
        d1.push_back(i);
    }
    cout<<endl;
    printDeque(d1);

    if(!d1.empty())
    {
        cout<<"容器不为空"<<endl;
    }

    cout<<"容器大小为："<<d1.size()<<endl;
    printDeque(d1);
    d1.resize(15);
    cout<<"容器大小为："<<d1.size()<<endl;
    printDeque(d1);
    
    d1.resize(15,100);
    printDeque(d1);
}
int main()
{   
    test01();
    return 0;
}