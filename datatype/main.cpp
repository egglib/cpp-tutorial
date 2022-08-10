//
//  main.cpp
//  datatype

//数据类型存在的意义：给变量分配合适的内存空间
//字符型、宽字符型、整型、浮点型、双浮点型、布尔型
//C++规定在创建一个变量或常量时，必须要指定相应的数据类型，否则无法给变量分配内存

#include <iostream>
#include <string> //用C++风格字符串 要添加这个头文件
using namespace std;

int main(int argc, const char * argv[]) {
    //整型
    //作用：整型变量表示的是整数类型的数据
    //整型的类型有：
    //short（短整型、2字节、-2^15~2^15-1）、int（整型、4字节、-2^31~2^31-1）、
    //long（长整型、8字节）、long long（长长整型、8字节、-2^63~2^63-1）
    //区别在于所占内存空间不同
    
    //1、短整型(-32768~32767)
    short num1 = 32768;//值超过范围之后 就会变成负数
    //2、整型
    int num2 = 32768;
    //3、长整型
    long num3 = 10;
    //4、长长整型
    long long num4 = 10;
    
    cout<<"num1="<<num1<<endl;
    cout<<"num2="<<num2<<endl;
    cout<<"num3="<<num3<<endl;
    cout<<"num4="<<num4<<endl;
    
    //sizeof关键字
    //作用：利用sizeof关键字可以统计数据类型所占内存大小
    //语法：sizeof(数据类型/变量)
    cout<<"num2 size = "<<sizeof(num2)<<endl;
    
    cout<<"short size = "<<sizeof(short)<<endl;
    cout<<"int size = "<<sizeof(int)<<endl;
    cout<<"long size = "<<sizeof(long)<<endl;
    cout<<"long long size = "<<sizeof(long long)<<endl;
    
    //short < int <= long <= long long
    
    //实型（浮点型）
    //作用：用于表示小数
    //浮点型变量分为两种：
    //1、单精度float（4字节、7位有效数字）
    //2、双精度double（8字节、15-16位有效数字）
    //区别在于表示的有效数字范围不同
    //默认情况下，输出一个小数，会显示出6位有效数字
    
    //1、单精度float
    float f1 = 3.1415926535898f;
    //2、双精度double
    double d1 = 3.1415926535898;
    cout<<"f1 = "<<f1<<endl;
    cout<<"d1 = "<<d1<<endl;
    
    //统计float、double占用内存空间
    cout<<"float size = "<<sizeof(float)<<endl;
    cout<<"double size = "<<sizeof(double)<<endl;
    
    //科学计数法
    float f2 = 3e2; //3 * 10 ^2
    cout<<"f2 = "<<f2<<endl;
    
    float f3 = 3e-2; //3 * 0.1 ^2
    cout<<"f3 = "<<f3<<endl;
    
    //字符型
    //作用：字符型变量用于显示单个字符
    //语法char ch = 'a';
    //C和C++中字符型变量只占用1字节
    //字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放入到存储单元
    
    //字符型变量创建方式
    char ch = 'a';
    cout<<ch<<endl;
    
    //字符型变量所占内存大小
    cout<<"char size = "<<sizeof(ch)<<endl;
    cout<<"char size = "<<sizeof(char)<<endl;
    
    //字符型变量常见错误
    // char ch2 = "b";//创建字符型变量时候，要用单引号
    // char ch3 = 'abc';//创建字符型变量的时候，单引号内只能有一个字符
    
    //字符型变量对应的ASCII编码 A - 65,a - 97
    cout << (int)ch << endl;
    
    //转义字符
    //作用：用于表示一些不能显示出来的ASCII字符
    //常用的转义字符有:\n（换行） \\（反斜杠） \t（水平制表）
    
    //换行符
    cout << "hello world \n";
    
    //反斜杠
    cout<<"\\"<<endl;
    
    //水平制表 \t 可以整齐地输出数据
    cout<<"aaaa\thello world"<<endl;
    cout<<"aa\thello world"<<endl;
    
    //字符串型
    //作用：用于表示一串字符
    //C风格字符串
    //注意事项 1、char 字符串名[] 2、等号后面要用双引号 包含起来字符串
    char str[] = "hello cpp";
    cout<<str<<endl;
    
    //C++风格字符串
    //需要包含一个头文件 #include <string>
    string str2 = "hello cpp";
    cout<<str2<<endl;
    
    //布尔类型 bool
    //作用：布尔数据类型代表真或假的值
    //bool类型只有两个值：true（真、本质是1） false（假、本质是0）
    //bool类型占1个字节大小
    
    //创建bool数据类型
    bool flag = true;//true 代表真
    cout<<flag<<endl;
    
    flag = false;//false 代表假
    cout<<flag<<endl;
    
    //本质上 1代表真 0代表假
    
    //查看bool类型所占空间
    cout<<"bool size = "<<sizeof(bool)<<endl;
    
    //数据的输入
    //作用：用于从键盘获取数据
    //关键字：cin
    //语法：cin>>变量
    //整数
//    int a = 0;
//    cout << "请给整型变量a赋值：" << endl;
//    cin >> a;
//    cout << "整型变量a=" << a << endl;
    //浮点型
//    float f = 3.14f;
//    cout << "请给浮点型变量f赋值："<<endl;
//    cin >> f;
//    cout << "浮点型变量 f = "<< f <<endl;
    
    //字符型
//    char cha = 'a';
//    cout << "请给字符型变量ch赋值：" << endl;
//    cin >> cha ;
//    cout << "字符型变量 cha = "<< cha <<endl;
    
    //字符串型
//    string str3 = "hello";
//    cout << "请给字符串型变量str3赋值：" << endl;
//    cin >> str3 ;
//    cout << "字符串型变量 str3 = "<< str3 <<endl;
    
    //布尔型
    bool flag2 = false;
    cout << "请给布尔型变量flag2赋值："<<endl;
    cin >> flag2 ;//bool类型 只要是非0的值都代表真
    cout << "布尔型变量 flag2 = "<< flag2 <<endl;
    
    return 0;
}

