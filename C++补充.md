# C++后续补充

## 基本数据类型

### float机器码表示

sign=0是正数｜=-1是负数，fraction第n位是1就是2的-n次方累加（从左往右下标从1开始）

![image-20250115213710524](/Users/blog/Library/Application Support/typora-user-images/image-20250115213710524.png)



### 数据类型枚举型

枚举类型表示若干常量的集合，如果一个变量只有几种常量值，用枚举类型可读性会高很多，冒号加类型名可以指定枚举类型，枚举类型默认4字节大小

![image-20250115214102026](/Users/blog/Library/Application Support/typora-user-images/image-20250115214102026.png)



### 数据类型——union联合体

所有成员只可以取其中一个，所有成员的偏移都是0，union大小要保证和最大的成员对齐，所有成员共享同一块内存

![image-20250115214305030](/Users/blog/Library/Application Support/typora-user-images/image-20250115214305030.png)



## 指针和引用

### 指针

指针是C/C++很特别的数据类型，他为访问内存地址提供了便利

指针是一个变量，他的值是另一个变量的地址

使用*可以访问指针所在内存地址中存的值

指针也有地址

![image-20250115215042931](/Users/blog/Library/Application Support/typora-user-images/image-20250115215042931.png)



### 引用

引用是以存在变量的另一个名字，指向同一块地址，如果有一个发生变化，另一个也一定发生变化

一定不存在空引用，无法改变指向对象，必须在被创建时初始化

![image-20250115215302622](/Users/blog/Library/Application Support/typora-user-images/image-20250115215302622.png)



## 特殊关键字

### constexpr关键字

编译时常量，因此使用这个关键字可以做编译时优化，运行时性能会比const好

常量表达式不能包含函数调用或者对象构造

constexpr函数的返回值不能输void类型，不能声明变量或新类型

![image-20250115215607629](/Users/blog/Library/Application Support/typora-user-images/image-20250115215607629.png)

上图中，在编译的时候get_five()就被赋值为5，下面出现的get_five()就不再被编译。



### typedef关键字

类型别名typedef用来为一个已有的类型取一个新的名字，在复杂项目中可以提高代码可读性

![image-20250115215902096](/Users/blog/Library/Application Support/typora-user-images/image-20250115215902096.png)

上图中就是将int*起了一个别名GLAPIP



### volatile关键字

被volatile限定的变量表示告诉编译器这是一个易变量。每次都需要从内存地址读取这个数据![image-20250115220036206](/Users/blog/Library/Application Support/typora-user-images/image-20250115220036206.png)

因为不加volatile的时候，编译器会对代码做优化，编译器认为a和b赋值的时候i没有发生改变，所以为了让速度快一些，就直接把上次缓存的值赋给b。加上volatile以后，编译器认为i是易变的，每次都从内存中读取i的值



## 运算符与优先级

### 位运算符

位运算符指的是对二进制的某一位或几位做操作

| 运算符 | 作用                                              | 例子（4bit）              |
| ------ | ------------------------------------------------- | ------------------------- |
| &      | 按位与，每一位都做与运算，两个都是真是真          | 6(0110)&5(0101)==4(0100)  |
| \|     | 按位或，每一位都做或运算，有一个真就是真          | 6(0110)\|5(0101)==7(0111) |
| ^      | 按位异或，每一位都做异或运算，同真同假为假        | 6(0110)^5(0101)==3(0011)  |
| ~      | 按位非，每一位都做非运算，按位取反                | ~6(0110)==9(1001)         |
| <<     | 左移运算，左操作数向左移动右操作数的位数，空位补0 | 6(0110)<<1==12(1100)      |
| >>     | 右移运算，左操作数向右移动右操作数的位数，空位补0 | 6(0110)>>1==3(0011)       |

左移运算可以当作乘上2的n次方，右移运算可以当作除以2的n次方



### 逻辑运算符

| 运算符 | 作用   | 例子                   |
| ------ | ------ | ---------------------- |
| &&     | 逻辑与 | true&&false 返回false  |
| \|\|   | 逻辑或 | true\|\|false 返回true |
| !      | 逻辑非 | !true 返回false        |

a&&b：只要a是false那么b就不再判断

a||b：只要a是true那么b就不再判断



### 其他运算符

| 运算符        | 作用                                          | 例子                      |
| ------------- | --------------------------------------------- | ------------------------- |
| sizeof        | 返回变量的占位大小，单位是字节byte            | int a;sizeof(a)==4;       |
| condition?x:y | 三元运算符，如果condition为真执行x，否则执行y | true?a=1:a=2; a==1        |
| .             | 引用结构体或类对象的成员                      | S.a                       |
| ->            | 引用结构体或类指针对象的成员                  | S->a                      |
| &             | 获取变量的地址                                | &a，得到a的地址           |
| *             | 得到对应地址的变量                            | *a，得到指针变量a对应的值 |



### 优先级

括号和作用域运算符>其他一元运算符>算术运算符>关系运算符>位运算符>逻辑运算符>赋值运算符

位运算符位置是比较靠后的，如果不清楚优先级关系，应该使用括号。

## lambda表达式

在 C++ 中，**lambda 表达式** 是一种轻量级的匿名函数。它允许你在需要时直接定义一个函数，而不必为其命名。Lambda 表达式通常用于简化代码，尤其在需要短小函数的场合，比如算法函数调用、回调函数、并发编程等。

**Lambda 表达式的基本结构：**

```C++
[capture](parameters) -> return_type {
    // function body
};
```



各部分的解释：

​	1.	**[capture]**: 捕获列表，决定 lambda 表达式可以访问的外部变量。可以通过值（=）或引用（&）捕获外部全部局部变量，要想单独方式访问变量，可以将变量名以单独方式写进去。**值传递在lambda表达式内部默认是const类型可以加mutable关键字进行访问但是对外部局部变量不能修改，引用传递可以修改外部局部变量，以后都使用值传递形式，使用引用传递到编译期会变成指针，局部变量释放后不会输出预期内的结果**

​	2.	**(parameters)**: 参数列表，类似于普通函数的参数列表。

​	3.	**-> return_type**: 返回类型（可选）。如果省略，编译器会自动推断。

​	4.	**{…}**: 函数体，定义 lambda 表达式要执行的代码逻辑。





## foreach循环

C++ 中的 for each 循环实际上是基于 **范围** **for** **循环** (range-based for loop) 的一种形式。其语法如下：

```C++
for (declaration x: container) {
    // loop body
}
```

**declaration**：声明循环变量的类型，通常是容器中元素的类型或引用。

**x**：表示每次循环时容器的元素赋值给x。

**container**：要遍历的容器，如数组、std::vector 等。



![image-20241011220535026](/Users/blog/Library/Application Support/typora-user-images/image-20241011220535026.png)

## 头文件防卫式声明

```C++
XXX.h
#ifndef __XXX__
#define __XXX__

...


#endif
//防止在此使用该头文件时进行二次编译
```





## 内联函数(inline)

在类内的成员函数都是内联函数，但具体是不是内联函数需要编译器决定，一般较简单的函数编译器会让其成为内联函数，在类外声明的函数需要加关键字inline

如：这是类内实现的函数不需要关键字就是inline候选函数

<img src="/Users/blog/Library/Application Support/typora-user-images/image-20241130145435940.png" alt="image-20241130145435940" style="zoom:50%;" />



这是类外实现的函数需要加inline关键字才是inline候选函数

<img src="/Users/blog/Library/Application Support/typora-user-images/image-20241130145511556.png" alt="image-20241130145511556" style="zoom:50%;" />



## 构造函数

构造函数的写法

```C++
class complex{
public:	
		complex (double r=0,double i=0)	:re(r),im(i)	//等同于如下写法，但是要这么写，体现编码水平，而且效率高，在初始化的时候就进行赋值
		{}
		//complex (double r=0,double i=0){
		//re=r ; im=i;
		//}
private:
		double re,im;
};
```

**要使用初始列来写构造函数。**



##  成员函数

const对象只能调用const的成员函数，否则会报错。因为const就是告诉编译器这个值不会改变，当对象被const限制后，调用没有const的成员函数，编译器会认定这个成员函数会改变值，导致编译失败。

**构造成员函数的时候能加const的都要加const**



**成员函数都有一个隐藏的参数this** 在实际编程中这个this不能写出来，写出来会报错，但是可以直接应用

```C++
class complex{
public:
  //complex& operator += (this,const complex& r){}	 
	complex& operator += (const complex& r){	//这里this 其实是隐藏的，就是上边的参数列表
    return __doapl(r);	//这里this也是隐藏的，就是下边的参数列表，在下边的doapl函数中可以直接调用this指针 但是不能写出来
    //return __dopal(this,r);	
  }
	
  complex& __doapl(complex* ths,const complex& r){
    ths->re +=r.re;
    ths->im +=r.im;
    return *ths;
  }
private:
  	double re,im;
};
{
  complex c1,c2;
  c2+=c1;	//这里c2就是this c2调用这个+=重载函数  所有的运算符重载都是作用到左值上
}
```



## 值传递、引用传递，返回值、返回引用

**引用的本质就是指针。**

**参数传递尽量使用引用传递，**但是传递之后会涉及到值被改变的问题，如果不希望被改可以加const修饰。

**返回值尽量返回引用。**在使用结束就被释放的变量不能使用引用返回。

这里只是尽量，不是所有情况，引用会影响程序的效率。**因为引用的本质是指针传引用的时候只传4个字节。**



> [!NOTE]
>
> 传递者无需知道接收者是以什么形式接收（这里还不太懂）



```C++
class complex{
public:
  //complex& operator += (this,const complex& r){}	 
	complex& operator += (const complex& r){	//这里this 其实是隐藏的，就是上边的参数列表
    return __dopal(this,r);	
  }
	
  complex& __doapl(complex* ths,const complex& r){
    ths->re +=r.re;
    ths->im +=r.im;
    return *ths;		//这里返回值是指针，但是返回值类型是引用，是可以的
  }
private:
  	double re,im;
};
{
  complex c1,c2;
  c2+=c1;	//这里c2就是this c2调用这个+=重载函数  所有的运算符重载都是作用到左值上
}
```



如果是全局函数的操作符重载，不能返回引用，只能返回值，因为返回的是个局部变量，如果返回引用，当操作符重载函数运行结束后，局部变量会被释放，返回引用会报错。

```C++
complex operator + （cons t complex& x,const complex& y){
	return complex(real(x)+real(y),imag(x)+imag(y));	//这里return 实际上是创建了一个临时对象，当函数运行结束后 局部对象会被释放
}//所以这个函数的返回值只能是返回value，要拷贝一份返回去

临时对象语法：typename(); 如： int(); int(7);	complex();
{
  	complex c1(2,1);	//函数退出时，生命周期结束
  	complex c2;
  	complex();	//和下边的都是临时对象，在程序运行到下一行时生命周期就结束了
  	complex(4,5);
  	int(7);
}
```



## friend 友元函数

```C++
class complex{
public:	
		complex (double r=0,double i=0)	:re(r),im(i)	//等同于如下写法，但是要这么写，体现编码水平，而且效率高，在初始化的时候就进行赋值
		{}
		int func(const complex& param){
		return param.re+param.im;
		}
private:
		double re,im;
};

int main(){
	complex c1(2,1);
	complex c2;
	c2.func(c1);		//这里c2可以直接调用c1的私有成员，因为相同类的各个对象都互为友元，每个对象都可以互相访问对方的私有成员
	return 0;
}
```

**相同类的各个对象都互为友元，每个对象都可以互相访问对方的私有成员**



## 深拷贝浅拷贝

当参数是指针时，必须要用深拷贝进行构造，如果用浅拷贝会出现内存泄漏的问题。

浅拷贝是将值进行拷贝赋值给对象，如果指针进行浅拷贝，会导致两个对象的指针指向同一块内存。

所以要使用深拷贝new一块内存在堆区，然后将指针指向new的内存的地址，将要被拷贝的对象的值放在堆区。



### 拷贝赋值函数

要将自己先delete掉，然后new一块新内存，将传进来的对象复制到new的内存中。

```C++
class string{
	string& operator= (const string& str){
		if(this==&str)	return * this;
		delete[] m_data;	//先将自己释放掉
		m_data=new char[strlen(str.m_data)+1];
		strcpy(m_data,str.m_data);
		return *this;
	}
};

{
  string s1("hello");
  string s2;
  s2=s1;	//拷贝赋值函数
}
```



## 堆区、栈区、内存管理

栈区（stack），是存在于某作用域的一块内存空间。当调用函数时，函数本身会形成一个栈区用来放置它所接收的参数，以及返回地址。在函数本体内生命的任何变量，其所使用的内存块都来自栈区

堆区（heap），是指由操作系统提供的一块全局内存空间，程序可动态分配

```C++
{string s1;}
//s1就是栈区对象，在作用域结束之后就会由析构函数自动释放

{static string s2;}
//s2就是静态对象，在作用域结束后仍然存在，生命周期至整个程序结束

string s3;
//s3是全局对象，写在任何函数体外部的，可以视为静态对象，生命周期至整个程序结束

{string * s=new string;	delete s;}
//s就是堆区对象，生命周期在delete后结束，由程序员手动释放
{string * s=new string;}
//上述代码会出现内存泄漏，当作用域结束后，s所指向的堆区对象仍然存在，但指针s的生命结束了，作用域之外再也看不到s，没有机会delete s
```



### new、delete的本质

new的本质：先调用malloc分配内存，然后用static_cast强制类型转换，最后调用构造函数

```C++
Complex* pc = new Complex(1,2);
//编译器转化为：
void* mem = operator new(sizeof(Complex));	//operator new函数内部调用malloc() 目的是分配内存
pc = static_cast<Complex*>(mem);		//强制类型转换
pc->Complex::Complex(1,2);			//构造函数
```



delete的本质：先调用析构函数，在调用free释放内存

```C++
String* ps = new String("Hello");
...
delete ps;	//实质上是先调用析构函数 delete[]清空指针指向的内存空间，然后free释放内存。
//编译器转化为：
String::~String(ps);	//析构函数
operator delete(ps);		//释放内存，内部调用free(ps)
```



<img src="/Users/blog/Library/Application Support/typora-user-images/image-20241201194300401.png" alt="image-20241201194300401" style="zoom: 33%;" />

动态分配所得的内存块（在vs code编译器中要分配内存是16的倍数）灰色部分是在调试的情况下分配的内存，红色是cookie（malloc和free用来分配和释放的标记），如左一的cookie所示后两位41 ，4*16是分配的内存大小，最后一位1是代表分配出去的内存，如果是0代表要回收内存

绿色是补充为了得到16的倍数分配的空间。（**每一小块代表4个字节，也就是32位，代表最大2^32-1，一共8个0，就是十六进制每个0都*2^4，正好32位**）

左侧两个：Complex是两个double数据类型，所以分配8个字节。

右侧两个：string是指针类型，所以分配4个字节



如果new的是数组，delete也要是数组 delete[] 

<img src="/Users/blog/Library/Application Support/typora-user-images/image-20241201203412384.png" alt="image-20241201203412384" style="zoom:33%;" />

动态分配数组，vs code编译器中会增加4个字节记录数组大小。如图中的3

<img src="/Users/blog/Library/Application Support/typora-user-images/image-20241201203741715.png" alt="image-20241201203741715" style="zoom:33%;" />

如果没有用delete[]，编译器会认为只需要释放一个，只释放了数组的第一个指针，后边的指针指向的内存没有被释放，会造成内存泄漏。

如果用了delete[]，编译器会知道释放的是一个数组，会调用多次析构函数，释放指针指向的内存。



## static关键字

static成员函数只能调用static成员变量，static成员变量类内声明，类外初始化。

可以通过class name调用static成员函数，也可以通过对象调用。



## 继承、复合、委托

### Composition（复合）

表示has-a，类内部有另一个类。

<img src="/Users/blog/Library/Application Support/typora-user-images/image-20241211104641717.png" alt="image-20241211104641717" style="zoom:33%;" />

Container内部含有Component。

复合关系下的构造函数和析构函数

- 构造由内而外
  - Container的构造函数首先调用Component的默认构造函数，然后执行自己的构造函数。
- 析构由外而内
  - Container的析构函数首先执行自己，然后才调用Component的析构函数。



### Delegation（委托）

用指针联系两个类，一个类内部包含另一个类的指针，用指针操作另一个类。





### Inheritance（继承）

public继承表示is-a，父类的数据可以完整继承，基类的析构函数必须是virtual虚函数

继承关系下的构造函数和析构函数

- 构造由内而外
  - 派生类的构造函数首先调用基类的默认构造函数，然后才执行自己
- 析构由外而内
  - 派生类的析构函数首先执行自己，然后才调用基类的析构函数



## 虚函数

- non-virtual函数：不希望派生类重写这个函数
- virtual函数：希望派生类重写这个函数，并且在基类中已经有定义
- pure virtual函数：纯虚函数，派生类必须重写这个函数，在基类中没有默认定义



