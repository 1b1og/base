#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

//常用算术生成算法 fill 算法
// fill(iterator beg ,iterator end,value);
//beg 开始迭代器 end  结束迭代器 value 填充的值

class myPrint
{
public:
    void operator()(int val)
    {
        cout<<val<<" ";
    }
};

void test01()
{
    vector<int>v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }

    //后期重新填充 容器内所有元素都变成 参数3的值
    fill(v.begin(),v.end(),10);

    for_each(v.begin(),v.end(),myPrint());
}

int main()
{
    test01();
    return 0;
}