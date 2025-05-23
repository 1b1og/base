#include<iostream>
#include<vector>
using namespace std;

//vector预留空间

void test01()
{
    vector<int>v1;

    //预留空间 减少动态扩展次数
    v1.reserve(150000);   //预留空间不可初始化不可访问，和resize不同 resize有默认值 

    int num=0;  //统计开辟次数
    int *p=NULL;

    for(int i=0;i<100000;i++)
    {
        v1.push_back(i);

        if(p!=&v1[0])  
        {
            p=&v1[0];
            num++;
        }
    }

    cout<<"num="<<num<<endl;

    cout<<"容量为："<<v1.capacity()<<endl;
    
}
int main()
{
    test01();
    return 0;
}