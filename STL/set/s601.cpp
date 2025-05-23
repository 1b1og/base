#include<iostream>
#include<set>
using namespace std;

//set容器排序

class myCompare
{
public:
    bool operator()(int v1,int v2)
    {
        return v1>v2;
    }
};
void test01()
{
    set<int>s1;

    s1.insert(10);
    s1.insert(50);
    s1.insert(20);
    s1.insert(40);
    s1.insert(30);

    for(set<int>::iterator it=s1.begin();it!=s1.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;

    //指定排序规则为从大到小
    set<int,myCompare>s2;

    //set容器在插入数据之后就不能改变顺序了，只能在插数据前重新定义排序规则
    s2.insert(10);
    s2.insert(50);
    s2.insert(20);
    s2.insert(40);
    s2.insert(30);

    for(set<int,myCompare>::iterator it=s2.begin();it!=s2.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
}
int main()
{
    test01();
    return 0;
}