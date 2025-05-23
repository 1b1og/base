#include<iostream>
#include<string>
using namespace std;
//虚析构和纯虚析构
//动物类
class Animal
{
public:
    Animal()
    {
        cout<<"Animal构造函数调用"<<endl;
    }
    //虚析构  利用虚析构可以解决父类指针释放子类对象不干净的问题
    // virtual ~Animal()
    // {
    //     cout<<"Animal虚析构函数调用"<<endl;
    // }

    //纯虚析构  需要声明也需要实现
    //有了纯虚析构这个类也属于抽象类，无法实例化对象
    virtual ~Animal()=0;
    //纯虚函数
    virtual void speak()=0;
};
//纯虚析构类外实现
Animal::~Animal()
{
    cout<<"Animal纯虚析构函数调用"<<endl;
}
class Cat:public Animal
{
public:
    Cat(string name)
    {
        cout<<"Cat构造函数调用"<<endl;
        m_name=new string(name);
    }
    ~Cat()
    {
        if(m_name!=NULL)
        {
            cout<<"Cat析构函数调用"<<endl;
            delete m_name;
            m_name=NULL;
        }
    }
    void speak()
    {
        cout<<*m_name<<"小猫在说话。"<<endl;
    }
    string *m_name;
};
void test01()
{
    Animal *animal=new Cat("Tom");
    animal->speak();
    delete animal;//抽象类不能实例化对象 要用虚析构释放
}
int main()
{
    test01();
    return 0;
}