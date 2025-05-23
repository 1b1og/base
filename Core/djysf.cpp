#include<iostream>
using namespace std;
//递减运算符重载
class MyInteger
{
    friend ostream& operator<<(ostream& cout,MyInteger myint);
public:
    //重载前置--运算符
    MyInteger& operator--()
    {
        m_Num--;
        return *this;
    }
    //重载后置--运算符
    MyInteger operator--(int)
    {
        MyInteger temp =*this;
        m_Num--;
        return temp;
    }
    MyInteger()
    {
        m_Num=0;
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
    cout<<myint--<<endl;
    cout<<myint<<endl;
    cout<<--myint<<endl;
    cout<<myint<<endl;
}
int main()
{
    test01();
    return 0;
}