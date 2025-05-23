#include <iostream>
using namespace std;
int main()
{
    // 1.const修饰指针  常量指针
    int a = 10, b = 10;
    const int *p = &a; // 指针的指向可以修改，指针指向的值不可以修改
    //*p=20;错误
    p = &b; // 正确

    // 2.const修饰常量  指针常量
    int *const p2 = &a; // 指针的指向不可以修改，指针指向的值可以修改
    *p2 = 20;           // 正确
    // p2=&b;错误

    // 3.const 既修饰指针又修饰常量
    const int *const p3 = &a; // 指针的指向和指针指向的值都不可以修改
    //*p3=20;错误
    // p3=&b;错误

    cout << "*p=" << *p << endl;
    cout << "*p2=" << &a << endl;
    cout << "*p3=" << &b << endl;
    return 0;
}