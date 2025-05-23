#include<iostream>
#include<map>
using namespace std;

//map插入和删除

void printMap(map<int,int>& m)
{
    for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
    {
        cout<<"key="<<(*it).first<<" "<<"value="<<(*it).second<<endl;
    }
}

void test01()
{
    map<int,int> m;

    //插入
    //第一种方式
    m.insert(pair<int,int>(1,10));

    //第二种方式
    m.insert(make_pair(2,20));

    //第三种方式
    m.insert(map<int,int>::value_type(3,30));

    //第四种
    m[4]=40;    //不建议用  用途 利用key访问value

    printMap(m);

    //删除
    m.erase(m.begin());
    printMap(m);

    m.erase(3);  //按照key删除  不会删value
    printMap(m);

    //清空
    // m.erase(m.begin(),m.end());
    m.clear();
    printMap(m);
}

int main()
{
    test01();
    return 0;
}