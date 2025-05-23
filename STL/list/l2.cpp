#include<iostream>
#include<list>
using namespace std;

//list赋值和交换

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

    //assign赋值
    list<int>L2;
    L2.assign(L1.begin(),L1.end());
    printList(L2);

    L2.assign(10,100);
    printList(L2);

    //operator=赋值
    list<int>L3=L2;
    printList(L3);

    //swap互换容器
    L3.swap(L1);
    printList(L3);
    printList(L1);
}
int main()
{
    test01();
    return 0;
}