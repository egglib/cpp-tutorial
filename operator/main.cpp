//
//  main.cpp
//  operator

#include <iostream>
using namespace::std;

//运算符
//作用：用于执行代码的运算
//算数运算符、赋值运算符、比较运算符、逻辑运算符

int main(int argc, const char * argv[]) {
    
    //加、减、乘、除
    int a1 = 10;
    int b1 = 3;
    
    cout << a1+b1 << endl;
    cout << a1-b1 << endl;
    cout << a1*b1 << endl;
    cout << a1/b1 << endl; //两个整数相除 结果依然是整数 将小数部分去除
    
    int a2 = 10;
    int b2 = 20;
    cout << a2/b2 << endl;
    
    int a3 = 10;
    int b3 = 0;
    //cout << a3/b3 << endl;//错误！两个数相除，除数是不可以为0的
    
    //两个小数可以相除
    double d1 = 0.5;
    double d2 = 0.25;
    cout << d1/d2 << endl;//运算的结果也可以是小数
    
    //取模（本质就是求余数） 只有整型变量才能做取模运算的
    int a4 = 10;
    int b4 = 3;
    cout << a4 % b4 << endl;
    
    int a5 = 10;
    int b5 = 20;
    cout << a5 % b5 << endl;
    
    int a6 = 10;
    int b6 = 0;
//    cout << a6 % b6 << endl;//两个数相除除数不可以为0，所以也做不了取模运算
    
    double d3 = 3.14;
    double d4 = 1.1;
//    cout << d3/%d4 << endl; //两个小数是不可以做取模运算的
    
    //1、前置递增
    int a = 10;
    ++a;
    cout << "a=" << a << endl;
    //2、后置递增
    int b = 10;
    b++;
    cout << "b=" << b << endl;
    //3、前置和后置的区别
    //前置递增 先让变量+1 然后进行表达式运算
    int a7 = 10;
    int b7 = ++a7 * 10;
    cout << "a7=" << a7 << endl;
    cout << "b7=" << b7 << endl;
    //后置递增 先进行表达式运算，然后让变量+1
    int a8 = 10;
    int b8 = a8++ * 10;
    cout << "a7=" << a8 << endl;
    cout << "b7=" << b8 << endl;
    
    //赋值运算符
    //作用：用于将表达式的值符给变量
    
    // =
    int a9 = 10;
    a9 = 100;
    cout << "a9 = " << a9 << endl;
    
    // +=
    a9 = 10;
    a9 += 2; // a9 = a9 + 2
    cout << "a9 = " << a9 << endl;
    
    // -=
    a9 = 10;
    a9 -= 2; // a9 = a9 - 2
    cout << "a9 = " << a9 << endl;
    
    // *=
    a9 = 10;
    a9 *= 2; // a9 = a9 * 2
    cout << "a9 = " << a9 << endl;
    
    // /=
    a9 = 10;
    a9 /= 2; // a9 = a9 / 2
    cout << "a9 = " << a9 << endl;
    
    // %=
    a9 = 10;
    a9 %= 2; // a9 = a9 % 2
    cout << "a9 = " << a9 << endl;
    
    //比较运算符
    //作用：用于表达式的比较，并返回一个真值或假值
    
    // ==
    cout << (a8 == b8) << endl;
    
    // !=
    cout << (a8 != b8) << endl;
    
    // >
    cout << (a8 > b8) << endl;
    
    // <
    cout << (a8 < b8) << endl;
    
    // >=
    cout << (a8 >= b8) << endl;
    
    // <=
    cout << (a8 <= b8) << endl;
    
    //逻辑运算符
    //作用：用于根据表达式的值返回真值或假值
    
    // ! 非 在C++ 除了0 都为真
    cout << !a << endl;
    cout << !!a << endl;
    
    // && 与 两个条件都为真，结果才为真(同真为真，其余为假)
    cout << (a && b) << endl;
    
    a = 0;
    b = 10;
    cout << (a && b) << endl;
    
    a = 0;
    b = 0;
    cout << (a && b) << endl;
    
    // || 或（同假为假，其余为真）
    
    a = 10;
    b = 10;
    cout << (a || b) << endl;
    
    a = 0;
    b = 10;
    cout << (a || b) << endl;
    
    a = 0;
    b = 0;
    cout << (a || b) << endl;
    
    return 0;
}

