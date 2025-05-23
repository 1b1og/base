#include<iostream>
using namespace std;
//递增运算符重载
class MyInteger{
public:
    friend ostream& operator<<(ostream& cout,MyInteger myint);
    MyInteger()
    {
        m_Num=0;
    }
    //重载前置++运算符   返回引用是为了一直对一个数据操作
    MyInteger& operator++()
    {
        m_Num++;
        return *this;//返回函数本身的值
    }
    //重载后置++运算符 
    MyInteger operator++(int)  //void operator(int)  int代表占位参数  可以用于区分前置和后置
    //不返回引用 因为temp是一个局部参数 函数执行结束后被释放
    {
        //先记录当时结果
        MyInteger temp=*this;
        //后递增
        m_Num++;
        //返回记录值
        return temp;
    }
private:
    int m_Num;
};
//重载左移运算符
ostream& operator<<(ostream& cout,MyInteger myint)
{
    cout<<myint.m_Num;
    return cout;
}
void test01()
{
    MyInteger myint;
    cout<<myint<<endl;
    cout<<++myint<<endl;
    cout<<myint<<endl;
    cout<<myint++<<endl;
    cout<<myint<<endl;
}
int main()
{
    test01();
    return 0;
}