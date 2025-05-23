#include<iostream>
using namespace std;
//构造函数的分类和调用
//两种分类方式：
//按参数分为：有参构造和无参构造
//按类型分为：普通构造和拷贝构造
//三种调用方式：
//括号法，显示法，隐式转换法
class Person
{
    public:
    //构造函数
    Person()//无参构造函数(默认构造)
    {
        cout<<"Person无参构造函数的调用"<<endl;
    }
    Person(int a)//有参构造函数
    {
        age=a;
        cout<<"Person有参构造函数的调用"<<endl;
        cout<<"年龄为："<<age<<endl;
    }
    Person(const Person &p)//拷贝构造函数
    {
        //将传入的人身上的所有属性，拷贝到我身上
        age=p.age;
        cout<<"Person拷贝构造函数的调用"<<endl;
        cout<<"拷贝年龄为："<<age<<endl;
    }
    //析构函数
    ~Person()
    {
        cout<<"Person析构函数的调用"<<endl;
    }
    int age;
};
//调用
void test01()
{
    //1.括号法
    Person p1;  //默认构造函数的调用
    Person p2(10);//有参构造函数
    Person p3(p2);//拷贝构造函数
    p2.age=20;
    cout<<"p2的年龄为"<<p2.age<<endl;
    
    cout<<"p3的年龄为"<<p3.age<<endl;
    //注意事项
    //调用默认构造函数时候不要加() 编译器会判定为函数声明 不会认为在创建对象  Person p1();

    //2.显示法
    // Person p1;//默认构造函数的调用
    // Person p2=Person(10);//有参构造函数
    // Person p3=Person(p2);//拷贝构造函数

    // Person(10);  //匿名对象 属于有参构造函数 特点：当前行执行结束后，系统会立即回收掉匿名对象  初始化后立即释放 然后往下执行
    // cout<<"abcd"<<endl;
    // 注意事项2
    //不要用拷贝构造函数 初始化匿名对象 编译器会认为Person (p3)==Person p3; 是对象声明;
    // Person(p3);

    //3.隐式转换法
    // Person p1=10; //相当于写了 Person p1=Person(10);
    // Person p2=p1; //拷贝构造 相当于写了 Person p2= Person(p1);
}
int main()
{
    test01();
    return 0;
}