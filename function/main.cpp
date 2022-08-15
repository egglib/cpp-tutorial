//
//  main.cpp
//  function

#include <iostream>
using namespace::std;
#include "swap.h"
//函数
//作用：将一段经常使用的代码封装起来，减少重复代码
//一个较大的程序，一般分为若干个程序块，每个模块实现特定的功能

//函数的定义
//函数的定义一般主要有5个步骤
//1、返回值类型：一个函数可以返回一个值，在函数定义中
//2、函数名：给函数起个名字
//3、参数列表：使用该函数时，传入的数据
//4、函数体语句：花括号内的代码，函数内需要执行的语句
//5、return表达式：和返回值类型挂钩，函数执行完后，返回相应的数据

//函数定义的时候，num1和num2并没有真实的数据，
//他只是一个形式上的参数，简称形参
int add(int num1,int num2){
    return num1 + num2;
}

//函数的调用
//使用定义好的函数

//值传递
//定义函数，实现两个数字进行交换函数

//如果函数不需要返回值，声明的时候可以写void
void swapnum(int num1,int num2){
    cout << "交换前：" << endl;
    cout << "num1：" << num1 << endl;
    cout << "num2：" << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "交换后：" << endl;
    cout << "num1：" << num1 << endl;
    cout << "num2：" << num2 << endl;
    //return;返回值不需要的时候，可以不写reutrn
}

//函数的常见样式
//常见的函数样式有4种
//1、无参无返

void test01(){
    cout << "this is test01" << endl;
}

//2、有参无返
void test02(int a){
    cout << "this is test02"<< a << endl;
}

//3、无参有返
int test03(){
    cout << "this is test03" << endl;
    return 100;
}

//4、有参有返
int test04(int a){
    cout << "this is test04 a ="<< a<< endl;
    return a;
}


//函数的声明
//比较函数，实现两个整型数字进行比较，返回较大的值

//提前告诉编译器函数的存在，可以利用函数的声明
//声明可以写多次，但是定义只能有一次
int max(int a,int b);

//函数的分文件编写
//实现两个数字进行交换的函数


//创建.h后缀名的头文件
//创建.cpp后缀名的源文件
//在头文件中写函数声明
//在源文件中写函数定义

int main(int argc, const char * argv[]) {
    //main函数中调用add函数
    int a = 10;
    int b = 20;
    
    //函数调用语法：函数名称（参数）
    //a 和 b称为 实际参数，简称实参
    //当调用函数的时候，实参的值会传递给形参
    int sum = add(a, b);
    cout <<"sum ="<<sum << endl;
    a = 100;
    b = 500;
    int c = add(a, b);
    cout << "c = "<< c << endl;
    
    //当我们做值传递的时候，函数的形参发生任何改变，并不会影响实参
    cout << "a = "<< a << endl;
    cout << "b = "<< b << endl;
    swapnum(a,b);
    cout << "a = "<< a << endl;
    cout << "b = "<< b << endl;
    
    test01();
    test02(100);
    int num1 = test03();
    cout << "num1---"<<num1<<endl;
    int num2 = test04(1000);
    cout << "num2---"<<num2<<endl;
    
    cout << max(a,b) << endl;
    
    swap(a, b);
    return 0;
}

int max(int a,int b){
    return a > b ? a : b;
}


