#include<iostream>
using namespace std;

//内联函数

#define ADD(x,y) x+y  //宏函数

//在普通函数前面加上inline是向编译器申请成为内联函数
//注意：加inline可能成为内联函数，可能不成为
inline int Add(int x,int y)     //内联函数的效率和宏函数差不多 效率高
{
    return x+y;
}

void test01()
{
    //10+20*2
    int ref=ADD(10,20)*2; //50
    int ref2=Add(10,20)*2; //60
    cout<<"ref="<<ref<<endl;
    cout<<"ref2="<<ref2<<endl;
}

#define COMAPD(x,y) ((x)<(y)?(x):(y))

inline  int func(int x,int y)
{
    return x<y?x:y;
}
void test02()
{
    int a=1;
    int b=3;
    //                    COMAPD((++a)<(b)?(++a):(b))  运算过程
    // cout<<"COMAPD(x,y)="<<COMAPD(++a,b)<<endl;   //3

    cout<<"func(x,y)="<<func(++a,b)<<endl;   //2
}
int main()
{
    // test01();
    test02();
    return 0;
}