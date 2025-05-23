#include<iostream>
using namespace std;

//实现通用 对数组进行排序的函数
//规则 从大到小
//算法 选择排序
//测试 char数组 、int数组

//交换函数模板
template<class T>
void mySwap(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}
//排序算法
template<class T>
void mySort(T arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        int max=i;
        for(int j=i+1;j<len;j++)
        {
            //认定的最大值比遍历出的数值要小，说明j下标的元素才是真正的最大值
            if(arr[max]<arr[j])
            {
                max=j;
            }
        }
        if(max!=i)
        {
            //交换max和i元素
            mySwap(arr[max],arr[i]);
        }
    }
}

//提供打印数组的模板
template<class T>
void printArray(T arr[], int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void test01()
{
    //测试char数组
    char charArr[]="bacdfe";
    int length=sizeof(charArr)/sizeof(char);  //字符数组的长度除一个字符的长度才是数组的长度
    mySort(charArr,length);
    printArray(charArr,length);
}

void test02()
{
    //测试int数组
    int intArr[]={4,7,2,8,6,5,3,9,1,0};
    int length=sizeof(intArr)/sizeof(int);
    mySort(intArr,length);
    printArray(intArr,length);
}
int main()
{
    // test01();
    test02();
    return 0;
}