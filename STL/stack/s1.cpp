#include<iostream>
#include<stack>
using namespace std;

//stack常用接口

void test01()
{
    //特点：符合先进后出的数据结构
    stack<int>s;

    //入栈
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    //只要栈不为空，查看栈顶，并且执行出栈操作
    while(!s.empty())
    {
        //查看栈顶元素
        cout<<"栈顶元素为："<<s.top()<<endl;

        //出栈
        s.pop();
    }

    cout<<"栈的大小为："<<s.size()<<endl;
    stack<int>s1;
    s1=s;
}
int main()
{
    test01();
    return 0;
}