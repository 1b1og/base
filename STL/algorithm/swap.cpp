#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//常用替换算法 swap 算法 要交换同种类型容器
// swap( container c1, container c2);
//c1 容器1 c2 容器2

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
    vector<int>v1;
    vector<int>v2;

    for(int i=0;i<5;i++)
    {
        v1.push_back(i);
    }

    for(int i=5;i<10;i++)
    {
        v2.push_back(i);
    }

    cout<<"交换前："<<endl;
    for_each(v1.begin(),v1.end(),myPrint());
    cout<<endl;
    for_each(v2.begin(),v2.end(),myPrint());
    cout<<endl;

    swap(v1,v2);

    cout<<"交换后："<<endl;
    for_each(v1.begin(),v1.end(),myPrint());
    cout<<endl;
    for_each(v2.begin(),v2.end(),myPrint());
    cout<<endl;
}

int main()
{
    test01();
    return 0;
}