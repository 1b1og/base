#include<iostream>
#include<string>
using namespace std;

//string 字符串比较

void test01()
{
    string str1="xello";
    string str2="yello";
    
    if(str2.compare(str1)==0)
    {
        cout<<"str1等于str2"<<endl;
    }
    else if(str1.compare(str2)>0)
    {
       cout<<"str1大于str2"<<endl; 
    }
    else
       cout<<"str1小于str2"<<endl;  
}
int main()
{
    test01();
    return 0;
}