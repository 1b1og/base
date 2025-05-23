#include<iostream>
using namespace std;
//c++面向对象三大特性：封装 继承 多态
//万事万物皆为对象，对象上有其属性和行为
//封装的意义
// 1.将属性和行为作为一个整体，表现生活中的事物
// 2.将属性和行为加以权限控制
// 语法： class 类名{访问权限：  属性/行为}
// 设计一个圆类 ，求圆的周长  周长公式： 2*PI*半径
const double PI=3.14;
class circle
{
    //访问权限
    //公共权限
public:
    //属性
    int c_r;
    //行为 用函数获取行为
    //获取圆的周长
    double calculateZC()
    {
        return 2*PI*c_r;
    }
};
int main()
{
    //通过圆类创建具体的圆（对象）
    //实例化(通过一个类 创建一个对象的过程)
    circle c1;
    //给圆对象的属性进行赋值
    c1.c_r=10;
    //2*PI*c_r=62.8
    cout<<"圆的周长为："<<c1.calculateZC()<<endl;
    return 0;
}