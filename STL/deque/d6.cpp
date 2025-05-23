#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

//deque排序

void printDeque(deque<int>& d)
{
    for(int i=0;i<d.size();i++)
    {
        cout<<d.at(i)<<" ";
    }
    cout<<endl;
}

void test01()
{
    deque<int>d;

    d.push_back(2);
    d.push_back(5);
    d.push_back(9);
    d.push_back(4);
    d.push_back(3);
    d.push_back(8);
    d.push_back(1);
    d.push_back(6);
    d.push_back(0);
    d.push_back(7);

    cout<<"排序前："<<endl;
    printDeque(d);

    cout<<"排序后："<<endl;

    //排序 默认是升序
    //对于支持随机访问的迭代器的容器，都可以利用sort算法直接对其进行排序
    sort(d.begin(),d.end());
    printDeque(d);
}
int main()
{
    test01();
    return 0;
}