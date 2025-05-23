#include<iostream>
#include<queue>
using namespace std;

//queue常用接口

void test01()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    queue<int> q1(q);
    
    if(!q.empty())
    {
    cout<<"q第一个元素为："<<q.front()<<endl;
    cout<<"q最后一个元素为："<<q.back()<<endl;
    cout<<"q容器大小为："<<q.size()<<endl;
    q.pop();   //先进先出 是一个队列 从队头出队尾进
    cout<<"q第一个元素为："<<q.front()<<endl;
    cout<<"q容器大小为："<<q.size()<<endl;
    }
    else
    {
        cout<<"容器为空"<<endl;
    }

    // queue<int> q1(q);
    if(!q1.empty())
    {
    cout<<"q1第一个元素为："<<q1.front()<<endl;
    cout<<"q1最后一个元素为："<<q1.back()<<endl;
    cout<<"q容器大小为："<<q1.size()<<endl;
    q1.pop();   //先进先出 是一个队列 从队头出队尾进
    cout<<"q第一个元素为："<<q1.front()<<endl;
    cout<<"q容器大小为："<<q1.size()<<endl;
    }
    else
    {
        cout<<"容器为空"<<endl;
    }
}
int main()
{
    test01();
    return 0;
}