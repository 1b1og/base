#include<iostream>
#include<string>
using namespace std;
//成员属性设置为私有
// 优点1：将所有成员属性设置为私有，可以自己控制读写权限
// 优点2：对于写权限，我们可以检测数据的有效性

//设计人类
class Person
{
public:
  
    //设置姓名
    void setName(string name)
    {
        p_name=name;
    }
    //获取姓名
    string getName()  //注意返回值类型
    {
        return p_name;
    }
    //获取年龄
    int getAge()
    {
        // int p_age=10;
        return p_age;
    }
    //设置年龄
    void setAge(int age)
    {
        if(age<0||age>100)  //加个判断条件如果年龄大于100或小于0 将年龄设为0岁
        {
            p_age=0;
            return ;
        }
        p_age=age;
    }
    //设置情人
    void setLover(string lover)
    {
        p_lover=lover;
    }
private:
    //姓名  可读可写
    string p_name;
    //年龄  可读可写
    int p_age;
    //情人  只写
    string p_lover;
};
int main()
{
    Person p1;
    string name;
    cin>>name;
    p1.setName(name);
    cout<<"姓名："<<p1.getName()<<endl;
    // p1.p_age=10;// 不能写 没有权限
    p1.setAge(180); //不在条件范围内返回一个随机值
    cout<<"年龄："<<p1.getAge()<<endl; //只读
    p1.setLover("aa");  //只写
    // cout<<"情人:"<<p_lover<<endl;// 不能读 没有权限
    return 0;
}