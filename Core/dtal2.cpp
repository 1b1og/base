#include<iostream>
using namespace std;
//多态案例2制作饮品
class AbstractDrinking
{
public:
    //煮水
    virtual void Boil()=0;
    //冲泡
    virtual void Brew()=0;
    //倒入杯中
    virtual void PourInCup()=0;
    //加入辅料
    virtual void PutSomething()=0;
    //制作饮品
    void makeDrink()
    {
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }
    virtual ~AbstractDrinking(){}
};

//制作咖啡
class Coffee:public AbstractDrinking
{
public:
    //煮水
    virtual void Boil()
    {
        cout<<"煮农夫山泉"<<endl;
    }
    //冲泡
    virtual void Brew()
    {
        cout<<"冲泡咖啡"<<endl;
    }
    //倒入杯中
    virtual void PourInCup()
    {
        cout<<"倒入杯中"<<endl;
    }
    //加入辅料
    virtual void PutSomething()
    {
        cout<<"加牛奶"<<endl;
    }
};

//制作茶叶
class Tea:public AbstractDrinking
{
public:
    //煮水
    virtual void Boil()
    {
        cout<<"煮百岁山"<<endl;
    }
    //冲泡
    virtual void Brew()
    {
        cout<<"冲泡茶叶"<<endl;
    }
    //倒入杯中
    virtual void PourInCup()
    {
        cout<<"倒入茶杯中"<<endl;
    }
    //加入辅料
    virtual void PutSomething()
    {
        cout<<"加枸杞"<<endl;
    }
};
//制作函数
void doWork(AbstractDrinking *abs)  //AbstractDrinking * abs= new Coffee;
{
    abs->makeDrink();
    delete abs;
}
void test01()
{
    //制作咖啡
    doWork(new Coffee);
    cout<<"-------------"<<endl;
    doWork(new Tea);
}
int main()
{
    test01();
    return 0;
}