#include<iostream>
#include<string>
using namespace std;

//string字符存取

void test01()
{
    string str="hello";
    // cout<<"str"<<str<<endl;

    //1.通过[]访问单个字符
    for(int i=0;i<str.size();i++)
    {
        cout<<str[i]<<" ";
    }
    //2.通过at方法取字符

    for(int i=0;i<str.size();i++)
    {
        cout<<str.at(i)<<" ";
    }

    //修改单个字符
    str[0]='x';
    cout<<str<<endl;

    str.at(1)='x';
    cout<<str<<endl;
}
int main()
{
    test01();
    return 0;
}