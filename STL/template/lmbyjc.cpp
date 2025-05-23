#include<iostream>
using namespace std;
//类模板与继承
//如果父类是类模板，子类需要指定出父类中T的数据类型
template<class T>
class Base
{
public:
    T m;
};

// class Son:public Base // 错误 必须要知道父类中T的数据类型 才能继承给子类
class Son:public Base<int>
{

};
void test01()
{
    Son s1;
}

//如果想灵活指定父类中T的类型，子类也需要变类模板
template<class T1,class T2>
class Son1:public Base<T2>
{
public:
    Son1()
    {
        cout<<"T1的数据类型为："<<typeid(T1).name()<<endl;
        cout<<"T2的数据类型为："<<typeid(T2).name()<<endl;
    }
    T1 obj;
};

void test02()
{
    Son1<int,char>s2;  //Son1类中 T1的数据类型为 int  父类中T的数据类型为 char
}
int main()
{
    // test01();
    test02();
    return 0;
}