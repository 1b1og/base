#include<iostream>
#include<list>
using namespace std;

//list容器构造函数

void printList(list<int>& l)
{
    for(list<int>::iterator it=l.begin();it!=l.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
}
void test01()
{
    //创建list容器
    list<int>l1;    //默认构造

    //添加数据
    for(int i=0;i<10;i++)
    {
        l1.push_back(i);
    }

    //遍历容器
    printList(l1);

    //区间方式构造
    list<int>l2(l1.begin(),l1.end());
    printList(l2);

    //拷贝构造
    list<int>l3(l2);
    printList(l3);

    //n个elem
    list<int>l4(10,100);
    printList(l4);
}
int main()
{
    test01();
    return 0;
}