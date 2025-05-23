#include<iostream>
#include<map>
using namespace std;

//map容器构造和赋值

void printMap(map<int,int> &m)
{
    for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
    {
        cout<<"key="<<(*it).first<<" "<<"value="<<(*it).second<<endl;
    }

}
void test01()
{
    //创建map容器
    map<int,int> m;

    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(3,20));
    m.insert(pair<int,int>(2,30));
    m.insert(pair<int,int>(4,40));

    //key值会自动排序
    printMap(m);

    //拷贝构造
    map<int,int>m1(m);
    printMap(m1);

    //赋值
    map<int,int>m2=m1;
    printMap(m2);
}
int main()
{
    test01();
    return 0;
}