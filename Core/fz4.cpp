#include<iostream>
using namespace std;
//struct和class的唯一区别就是在于 默认的访问权限不同
//struct 默认权限为公共
//class  默认权限为私有
class c1
{
   int c_a; // 默认是私有权限
};
struct c2  //struct里也可以写函数
{
    int c_a; //默认是公共权限
    void show()
    {
        cout<<c_a<<endl;
    }
};
int main()
{
    c1 c1;
    // c1.c_a=10;  //错误 访问权限是私有
    c2 c2;
    c2.c_a=10;  //正确 访问权限是公共
    c2.show();
    return 0;
}