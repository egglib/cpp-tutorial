//
//  main.cpp
//  varconst
//
//  Created by mac on 2022/8/10.
//

#include <iostream>
using namespace std;

//变量存在的意义：方便我们管理内存空间
//变量的作用：给一段指定的内存空间起名，方便操作这段内存
//变量创建语法：数据类型 变量名 = 变量初始值;

//常量 作用：用于记录程序中不可更改的数据
//常量的定义方式
//1、#define 宏常量
//2、const 修饰的变量

#define day 7


int main(int argc, const char * argv[]) {
    int a = 10;
    cout << "a:" << a<<endl;
    
    cout << "一周总共有："<<day<<"天"<<endl;
    
    //const 修饰的变量 不可以修改
    const int month =12;
    cout << "一年总共有："<<month<<"月"<<endl;
    
    //关键字是c++中预先保留的单词（标识符）
    //在定义变量或是常量的时候，不要用关键字
    
    //创建变量 数据类型 变量名称 = 变量的初始值
    //不要用关键字给变量或是常量起名称
    //int int = 0;
    
    //标识符命名规则
    //1、标识符不可以是关键字
    // int int = 0;
    
    //2、标识符是由字母、数字、下划线构成
    int abc = 10;
    int _abc = 20;
    int _123abc = 30;

    //3、标识符第一个字符只能是字母或下划线
    //    int 123abc = 40;
    
    //4、标识符是区分大小写的
    int aaa = 100;
    //    cout << AAA << endl;//AAA和aaa不是同一个名称
    //给变量起名的时候，最好能够做到见名知意

    return 0;
}
