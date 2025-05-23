#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

//常用算术生成算法 accumulate 算法
// accumulate(iterator beg,iterator end,value);
//beg 开始迭代器 end 结束迭代器 value 起始值

void test01()
{
    vector<int>v;
    for(int i=0;i<100;i++)
    {
        v.push_back(i);
    }

    int num= accumulate(v.begin(),v.end(),1000);    // 参数3 从起始值开始把容器内的元素 向上累加

    cout<<num<<endl;
}

int main()
{
    test01();
    return 0;
}