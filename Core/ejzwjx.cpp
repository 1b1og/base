#include<iostream>
#include<fstream>
using namespace std;
//二进制文件写操作
class Person
{
public:

    char m_Name[64]; //姓名
    int m_age; //年龄
};
void test01()
{
    //1.包含头文件

    //2.创建流对象
    ofstream ofs("person.txt",ios::out|ios::binary);

    //3.打开文件
    // ofs.open("person.txt",ios::out|ios::binary);  //可以直接写在上面

    //4.写文件
    Person p={"张三",18};
    ofs.write((const char*) &p,sizeof(Person));

    //5.关闭文件
    ofs.close();
}
int main()
{
    test01();
    return 0;
}