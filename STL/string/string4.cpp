#include<iostream>
#include<string>
using namespace std;

//字符串查找和替换

//1.查找
void test01()
{
    string str1="abcdefg";
    int pos=str1.find("de");  //存在返回位置，不存在返回-1
    if(pos==-1)
    {
        cout<<"未找到字符串"<<endl;
    }
    else
    cout<<"pos="<<pos<<endl;

    //rfind
    //rfind 从右往左查找 find从左往右查 但是位置都是从左往右计算
    pos=str1.rfind("de");

    cout<<pos<<endl;
}

//2.替换
void test02()
{
    string str1="abcdefg";

    //从1号位置起 3个字符 替换为“1111” 写什么那段区间换成什么
    str1.replace(1,3,"11111");   //换成a11111efg

    cout<<"str1="<<str1<<endl;
}
int main()
{
    // test01();
    test02();
    return 0;
}