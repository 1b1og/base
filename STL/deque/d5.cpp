#include<iostream>
#include<deque>
using namespace std;

//deque数据存取

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
    deque<int>d1;
    for(int i=0;i<10;i++)
    {
        d1.push_back(i);
    }
    printDeque(d1);

    cout<<"第一个元素："<<d1.front()<<endl;

    cout<<"第三个元素："<<d1[2]<<endl;
    
    cout<<"最后一个元素："<<d1.back()<<endl;
}
int main()
{
    test01();
    return 0;
}