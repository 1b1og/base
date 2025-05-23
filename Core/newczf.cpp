#include<iostream>
#include<new>
using namespace std;
//1.new的基本语法
int *func()
{
    //在堆区创建整形数据
    //new返回的是该数据类型的指针
    int *p=new int (10);
    return p;
}

void test01()
{
    int *p=func();//堆区的数据 由程序员管理释放 如果想释放堆区的数据用关键字delete
    cout<<*p<<endl;
    delete p;   //delete只是把指针所指的内存给释放掉，但并没有把指针本身释放掉
    // p=NULL;  //如果不把p设为空指针，delete之后会随机指向任意地址
    // delete p;
    cout<<*p<<endl;
}
//2.在堆区利用new开辟数组
void test02()
{
    // 创建10整型数据数组在堆区
    int *arr=new int[10];
    for(int i=0;i<10;i++)
    {
        arr[i]=i+100;//给10个元素赋值100～109
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }
    //释放堆区数组要加[]
    delete[] arr;
}
int main()
{
    // test01();
    test02();
    return 0;
}