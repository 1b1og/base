#include<iostream>
#include<list>
using namespace std;

//list大小操作

void printList(list<int>& L)
{
    for(list<int>::iterator it=L.begin();it!=L.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
}
void test01()
{
    list<int>L1;
    for(int i=0;i<10;i++)
    {
        L1.push_back(i);
    }
    printList(L1);

    //判断容器是否为空
    if (L1.empty())
    {
        cout<<"L1为空"<<endl;
    }
    else
    {
        cout<<"L1不为空"<<endl;
        cout<<"L1元素个数"<<L1.size()<<endl;
    }

    //重新指定大小
    L1.resize(15,100);
    printList(L1);
}
int main()
{
    test01();
    return 0;
}