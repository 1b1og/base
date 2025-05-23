#include<iostream>
#include<fstream>
using namespace std;
//文本文件写操作
void test01()
{
    //1.包含头文件fstream

    //2.创建流对象
    ofstream ofs;

    //3.指定打开方式
    ofs.open("text.txt",ios::out);

    //4.写内容
    ofs<<"hello world!"<<endl;
    ofs<<"hello vscode!"<<endl;

    //5.关闭文件
    ofs.close();
}
int main()
{
    test01();
    return 0;
}
