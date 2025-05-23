#include<iostream>
#include<string>
using namespace std;

//string 插入和删除
//插入和删除的起始下标都是从0开始
void test01()
{
    string str="hello";
    
    //插入
    str.insert(1,"1111");  //h1111ello
    cout<<"str="<<str<<endl;

    str.erase(1,4);
    cout<<"str="<<str<<endl;
}
int main()
{
    test01();
    return 0;
}