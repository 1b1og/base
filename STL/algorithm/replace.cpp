#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//常用替换算法 replace 算法
// replace(iterator beg,iterator end,oldvalue,newvalue);
//beg 开始迭代器 end 结束迭代器 oldvalue 旧元素 newvalue 新元素

class myPrint
{
public:
    void operator()(int val)
    {
        cout<< val<<" ";
    }
};
void test01()
{
    vector<int>v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }

    cout<<"替换前："<<endl;
    for_each(v.begin(),v.end(),myPrint());
    cout<<endl;
    replace(v.begin(),v.end(),5,6);
    cout<<"替换后："<<endl;

    for_each(v.begin(),v.end(),myPrint());
}

int main()
{
    test01();
    return 0;
}