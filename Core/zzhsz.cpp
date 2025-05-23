#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *p=arr;//数组名就是数组的首地址  之前讲过
    cout<<"第一个元素："<<arr[0]<<endl;
    cout<<"指针访问的第一个元素："<<*p<<endl;
    cout<<"数组占用内存："<<sizeof(arr)<<endl;
    cout<<"第一个元素占用内存："<<sizeof(arr[0])<<endl;
    //sizeof(arr)/sizeof(arr[0]) 代表数组长度

    for(int i=0;i<10;i++)
    {
        //cout<<arr[i]<<endl;
        //利用指针遍历数组
        cout<<*p<<endl;
        p++;//让指针向后偏移4个字节  指针占4个字节
    }
    return 0;
}