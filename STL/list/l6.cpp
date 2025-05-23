#include<iostream>
#include<list>
using namespace std;

//list反转和排序

void printList(const list<int>& L)
{
    for(list<int>::const_iterator it=L.begin();it!=L.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
}

bool compare(int v1,int v2)
{
    return v1>v2;
}
void test01()
{
    list<int>L1;
    L1.push_back(2);
    L1.push_back(3);
    L1.push_back(5);
    L1.push_back(1);
    L1.push_back(4);


    //反转
    cout<<"反转前："<<endl;
    printList(L1);

    L1.reverse();
    cout<<"反转后："<<endl;
    printList(L1);

    //排序
    //所有不支持随机访问迭代器的容器，不可以用标准算法
    //不支持随机访问迭代器的容器，内部会提供对应的一些算法
    //sort(L1.begin(),L1.end());   err
    cout<<"排序后："<<endl;
    L1.sort();   //list的成员函数 不是全局函数  默认是升序
    printList(L1);

    //降序
    L1.sort(compare);   //指定规则从大到小
    printList(L1);
}
int main()
{
    test01();
    return 0;
}