#include<iostream>
using namespace std;
//封装一个函数，利用冒泡排序，实现对整型数组的升序排列
//冒泡排序算法
void bubblesort(int  arr[],int len)
{
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
//打印输出
void printarr(int arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<*arr<<endl;
        arr++;
    }
}
int main()
{
    int arr[10]={4,3,6,9,1,2,10,8,7,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,len);
    printarr(arr,len);
    return 0;
}