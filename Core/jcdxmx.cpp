#include<iostream>
using namespace std;
//继承中的对象模型
class Base
{
//父类中所有非静态成员属性都会被继承下去
public:
    int m_a;
    // static int m_e;  //静态成员属性不会继承下去
protected:
    int m_b;
private:
    int m_c;
};
//公共继承
class Son:public Base
{
public:
    int m_d;
    void func()
    {
        cout<<"sizeof="<<sizeof(Son)<<endl;
    }
};
//保护继承
// class Son1:protected Base
// {
// public:
//     int m_e;
//     void func()
//     {
//         cout<<"sizeof="<<sizeof(Son1)<<endl;
//     }
// };
// //私有继承
// class Son2:private Base
// {
// public:
//     int m_f;
//     void func()
//     {
//         cout<<"sizeof="<<sizeof(Son2)<<endl;
//     }
// };
void test01()
{
    Son s;
    s.func();
    // Son1 s1;
    // s1.func();
    // Son2 s2;
    // s2.func();
}
int main()
{
    test01();
    return 0;
}