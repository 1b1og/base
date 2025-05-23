#include<iostream>
#include<map>
using namespace std;

//map容器排序

class myCompare
{
public:
    bool const operator()(int v1, int v2)  const    //加const 告诉编译器 不会修改对象的状态 
    {
        return v1>v2;   //降序
    }
};

void test01()
{
    map<int,int,myCompare>m;

    m.insert(make_pair(1,10));
    m.insert(make_pair(2,20));
    m.insert(make_pair(3,30));
    m.insert(make_pair(4,40));
    m.insert(make_pair(5,50));

    for(map<int,int,myCompare>::iterator it=m.begin();it!=m.end();it++)
    {
        cout<<"key="<<it->first<<" "<<"value="<<it->second<<endl;
    }
}

int main()
{
    test01();
    return 0;
}