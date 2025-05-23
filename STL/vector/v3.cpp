#include<iostream>
#include<vector>
using namespace std;

//vector容量和大小

void printVector(vector<int>& v)
{
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
}
void test01()
{
    vector<int>v1;
    for(int i=0;i<10;i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    if(v1.empty())   //empty() 函数 返回值是bool类型 返回true或false
    {
        cout<<"容器为空"<<endl;
    }
    else
    {
        cout<<"容器不为空"<<endl;
    }

    cout<<"容器的容量为"<<v1.capacity()<<endl;

    cout<<"容器中元素的个数为"<<v1.size()<<endl;

    //重新指定大小
    v1.resize(15,100);     //利用重载版本，可以指定默认填充值，参数2
    printVector(v1);   //如果重新指定的比原来长，默认用0填充

    v1.resize(5);
    printVector(v1);    //如果重新指定的比原来短，超出部分会删掉
}
int main()
{
    test01();
    return 0;
}