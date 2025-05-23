#include<iostream>
using namespace std;
//实现电脑组装
//CPU类
class CPU
{
public:
    virtual ~CPU(){}
    virtual void calculate()=0;
};

//显卡类
class videoCard
{
public:
    virtual ~videoCard(){}
    virtual void display()=0;
};

//内存条类
class Memory
{
public:
    virtual ~Memory(){}
    virtual void storge()=0;
};

//电脑类
class Computer
{
public:
    Computer(CPU *cpu,videoCard *vc,Memory *mem)
    {
        m_cpu=cpu;
        m_vc=vc;
        m_mem=mem;
    }

    //实现工作函数
    void Work()
    {
        //让零件工作调用接口
        m_cpu->calculate();
        m_vc->display();
        m_mem->storge();
    }
    ~Computer()
    {
        if(m_cpu!=NULL)
        {
            delete m_cpu;
            m_cpu=NULL;
        }
        if(m_vc!=NULL)
        {
            delete m_vc;
            m_vc=NULL;
        }
        if(m_mem!=NULL)
        {
            delete m_mem;
            m_mem=NULL;
        }
    }
private:
    CPU *m_cpu;
    videoCard *m_vc;
    Memory *m_mem;
};

//具体厂商
//InterCPU
class InterCPU:public CPU
{
public:
    void calculate()
    {
        cout<<"InterCPU开始工作"<<endl;
    }
};

//IntervideoCard
class IntervideoCard:public videoCard
{
public:
    void display()
    {
        cout<<"Inter显卡开始工作"<<endl;
    }
};

//InterMemory
class InterMemory:public Memory
{
public:
    void storge()
    {
        cout<<"Inter内存条开始工作"<<endl;
    }
}; 

//Lenovo厂商
//LenovoCPU
class LenovoCPU:public CPU
{
public:
    void calculate()
    {
        cout<<"LenovoCPU开始计算"<<endl;
    }
};

//LenovovideoCard
class LenovovideoCard:public videoCard
{
public:
    void display()
    {
        cout<<"Lenovo显卡开始工作"<<endl;
    }
};

//LenovoMemory
class LenovoMemory:public Memory
{
public:
    void storge()
    {
        cout<<"Lenovo内存条开始工作"<<endl;
    }
}; 
void test01()
{
    cout<<"电脑工作："<<endl;
    Computer *computer1=new Computer(new InterCPU,new IntervideoCard,new InterMemory);
    computer1->Work();
    delete computer1;
}
int main()
{
    test01();
    return 0;
}