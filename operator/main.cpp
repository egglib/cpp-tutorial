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
    
    return 0;
}

