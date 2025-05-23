#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//仿函数 返回值类型是bool数据类型，称为谓词
//一元谓词
class GreatFive
{
public:
    bool operator()(int val)
    {
        return val>5;
    }
};
void test01()
{
    vector<int>v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }

    //查找容器中有没有大于5的数字
    vector<int>::iterator it=find_if(v.begin(),v.end(),GreatFive());

    while(it!=v.end())
    {
        cout<<"找到大于5的数字"<<(*it)<<endl;
        it++;
    }
    
}
int main()
{
    test01();
    return 0;
}