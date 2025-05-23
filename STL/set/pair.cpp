#include<iostream>
#include<string>
using namespace std;

//pair对组创建

void test01()
{
    //第一种方式
    pair<string,int> p("Tom",20);

    cout<<"name="<<p.first<<endl;
    cout<<"age="<<p.second<<endl;


    //第二种方式
    pair<string,int>p2=make_pair("Jerry",30);
    cout<<"name="<<p2.first<<endl;
    cout<<"age="<<p2.second<<endl;

}
int main()
{
    test01();
    return 0;
}