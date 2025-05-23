#include<iostream>
#include<string>
using namespace std;

//string 子串
void test01()
{
    string str="abcdefg";
    string subStr=str.substr(1,3);
    cout<<"subStr="<<subStr<<endl;    //bcd
}


//实用操作
void test02()
{
    string email="zhangsan@qq.com";

    //从邮件地址中获取用户名信息
    int pos=email.find("@");
    string usrName=email.substr(0,pos);
    cout<<"usrName="<<usrName<<endl;
}
int main()
{   
    test01();
    test02();
    return 0;
}