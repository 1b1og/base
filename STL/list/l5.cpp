#include<iostream>
#include<list>
using namespace std;

//list数据存取

void test01()
{
    list<int>L1;
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);

    //L1[0];    不可以用[]访问list容器中的元素
    //L1.at(0);   不可以用at方式访问list容器中的元素
    //list本质是链表，不是连续线性空间存储数据，迭代器也是不支持随机访问的

    cout<<"第一个元素为："<<L1.front()<<endl;
    cout<<"最后一个元素为："<<L1.back()<<endl;

    //验证迭代器是否支持随机访问
    list<int>::iterator it=L1.begin();
    it++;   //支持双向递增递减访问
    it--;
    //it=it+1;     不支持随机访问 因为如果能+1 就可以+2  这是检验迭代器是否支持随机访问的方法
}
int main()
{
    test01();
    return 0;
}