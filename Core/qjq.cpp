#include<iostream>
using namespace std;
int  A= 10;//全局变量
int B =10;
const int c_a=10;
const int c_b=10;
int main()
{
    //全局区

    //全局变量、静态变量、常量

    
    //创建一个普通局部变量
    int a=10;//只要写在函数体内的都是局部变量
    int b=10;
    cout<<"局部变量a的地址："<<(long long)&a<<endl;//不存放在全局区
    cout<<"局部变量b的地址："<<(long long)&b<<endl; 
    cout<<"全局变量A的地址："<<(long long)&A<<endl;//存放在全局区
    cout<<"全局变量B的地址："<<(long long)&B<<endl;

    //静态变量  在普通变量前加static属于静态变量  也放在全局区
    static int s_a=10;
    static int s_b=10;
    cout<<"静态变量s_a的地址："<<(long long)&s_a<<endl;
    cout<<"静态变量s_b的地址："<<(long long)&s_b<<endl;

    //常量
    //字符串常量  存放在全局区
    cout<<"字符串常量的地址为："<<(long long)&"Hello world"<<endl;//字符串常量可以直接引用不用定义
    cout<<"字符串常量的地址为："<<(long long)&"name"<<endl;

    //const修饰的变量
    //const修饰的全局变量，const修饰的局部变量
    //const修饰的全局变量（全局常量）存放在全局区
    cout<<"const修饰的全局变量c_a的地址："<<(long long)&c_a<<endl;
    cout<<"const修饰的全局变量c_b的地址："<<(long long)&c_b<<endl;
    //const修饰的局部变量（局部常量）不存放在全局区
    const int c_A=10;
    const int c_B=10;
    cout<<"const修饰的局部变量c_A的地址："<<(long long)&c_A<<endl;
    cout<<"const修饰的局部变量c_B的地址："<<(long long)&c_B<<endl;
    return 0;
}