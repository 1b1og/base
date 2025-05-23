#include<iostream>
using namespace std;
//动态多态的底层逻辑
//不加virtual关键字父类占1个字节，加virtual关键字后父类占4个字节，是虚函数指针
//子类继承父类的虚函数指针，当函数重写时，子类中的函数会覆盖继承的虚函数表中的虚函数地址。
//动物类
class Animal
{
public:
    //虚函数
    virtual void speak()
    {
        cout<<"动物在说话。"<<endl;
    }
};
//猫类
class Cat:public Animal
{
public:
    void speak()
    {
        cout<<"小猫在说话。"<<endl;
    }
};
//狗类
class Dog:public Animal
{
public:
    void speak()
    {
        cout<<"小狗在说话。"<<endl;
    }
};
//执行说话的函数
//父类中函数不加virtual关键字是地址早绑定，在编译阶段确定函数地址
//如果想让猫狗说话，需要地址晚绑定，在运行阶段确定函数地址，在父类函数中加virtual关键字

//动态多态满足条件：
//1.有继承关系
//2.子类要重写父类中的虚函数（重写不是重载，重写要求 返回值类型 函数名 参数列表都相同）

//动态多态的使用  父类的指针或引用指向子类
void DoSpeak(Animal & animal)//Animal &animal=cat;  C++中允许父子类型转换，父类的引用或指针可以直接指向子类
{
    animal.speak();
}

void test01()
{
    Cat cat;
    DoSpeak(cat);
    Dog dog;
    DoSpeak(dog);
}

int main()
{
    test01();
    return 0;
}