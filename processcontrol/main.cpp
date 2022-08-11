//
//  main.cpp
//  processcontrol

//程序流程结构
//最基本的三种程序运行结构：顺序结构、选择结构、循环结构
//顺序结构：程序按顺序执行，不发生跳转
//选择结构：依据条件是否满足，有选择的执行相应功能
//循环结构：依据条件是否满足，循环多次执行某段代码

//选择结构
//if语句
//作用：执行满足条件的语句
//if语句的三种形式
//单行格式if语句
//多行格式if语句
//多条件的if语句

#include <iostream>
using namespace std;
#include <ctime> //time系统时间头文件包含

int main(int argc, const char * argv[]) {

    //选择结构 单行格式if语句
    //用户输入分数，如果分数大于600，视为考上一本，在屏幕上输出
    //1、用户输入分数
//    int score = 0;
//    cout << "请输入一个分数" << endl;
//    cin >> score;
//
    //2、打印用户输入的分数
//    cout << "你输入的分数为：" << score << endl;
    
    //3、判断分数是否大于600，如果大于，那么输出
    //注意事项，if条件后面不要加分号
//    if (score > 600) {
//        cout << "恭喜你考上了一本大学" << endl;
//    }

    //选择结构 多行格式if语句
//    if (score > 600) {
//        cout << "恭喜你！考上了一本大学" << endl;
//    }else{
//        cout << "你未考上一本大学" << endl;
//    }
    
    //选择结构 多条件的if语句 if(条件){}else if(条件1){}else{}
//    if (score > 600) {
//        cout << "恭喜你！考上了一本大学" << endl;
//    }else if(score > 500){
//        cout << "恭喜你！考上了二本大学" << endl;
//    }else if(score > 400){
//        cout << "恭喜你！考上了三本大学" << endl;
//    }else{
//        cout << "你未考上大学" << endl;
//    }
    
    //选择结构 嵌套if语句
//    if (score > 600) {
//        cout << "恭喜你！考上了一本大学" << endl;
//        if(score > 700){
//            cout << "你能考入Beijing University" << endl;
//        }else if(score > 650){
//            cout << "你能考入Tsinghua University" << endl;
//        }else{
//            cout << "你能考入People's University" << endl;
//        }
//    }else if(score > 500){
//        cout << "恭喜你！考上了二本大学" << endl;
//    }else if(score > 400){
//        cout << "恭喜你！考上了三本大学" << endl;
//    }else{
//        cout << "你未考上大学，请再接再厉" << endl;
//    }
    
    //三只小猪称体重，判断哪只最重
    
    //创建三只小猪的体重变量
//    int num1 = 0;
//    int num2 = 0;
//    int num3 = 0;
    
    //让用户输入三只小猪的重量
//    cout << "请输入小猪A的体重" << endl;
//    cin >> num1;
//
//    cout << "请输入小猪B的体重" << endl;
//    cin >> num2;
//
//    cout << "请输入小猪C的体重" << endl;
//    cin >> num3;
//
//    cout << "小猪A的体重为"<< num1 << endl;
//    cout << "小猪B的体重为"<< num2 << endl;
//    cout << "小猪C的体重为"<< num3 << endl;
    
    //判断哪只最重
//    if(num1 > num2){
//        if (num1 > num3) {
//            cout << "小猪A最重" << endl;
//        }else{
//            cout << "小猪C最重" << endl;
//        }
//    }else{
//        if (num2 > num3) {
//            cout << "小猪B最重" << endl;
//        }else{
//            cout << "小猪C最重" << endl;
//        }
//    }
    
    //三目运算符
    //作用：通过三目运算符实现简单的判断
    //语句：表达式1 ? 表达式2 : 表达式3
    //如果表达式1的值为真，执行表达式2，并返回表达式2的结果
    //如果表达式1的值为假，执行表达式3，并返回表达式3的结果
    //    int a = 10;
    //    int b = 20;
    //    int c = 0;
    //
    //    c = (a > b ? a : b);
    //    cout << "c = "<< c << endl;
    
    //在C++中三目运算符返回的是变量，可以继续赋值
    //    (a < b ? a : b) = 100 ;
    //    cout << "a = "<< a << endl;
    //    cout << "b = "<< b << endl;
    
    //switch 语句
    //作用：执行多条件分支语句
    
    //    int score = 0;
    //    cout << "请给电影打分" << endl;
    //    cin >> score ;
    //    cout << "你打的分数为" << score << endl;
    //    switch (score) {
    //        case 10:
    //        case 9:
    //            cout << "经典" << endl;
    //            break;
    //
    //        case 8:
    //            cout << "非常好" << endl;
    //            break;
    //        case 7:
    //        case 6:
    //            cout << "一般" << endl;
    //            break;
    //
    //        default:
    //            cout << "烂片" << endl;
    //            break;
    //    }
    
    //case里如果没有break，那么程序会一直向下执行
    //与if语句比，对于多条件判断时，switch结构清晰，执行效率高，缺点是switch不可以判断区间,判断时候只能是整型或字符型
    
    //循环结构
    //while循环语句
    //作用：满足循环条件，执行循环语句
    //语法：while(循环条件){}
    //解释：只要循环条件的结果为真，就执行循环语句
    //在屏幕中打印0～9这10个数字
    //    int num = 0;
    //    while (num < 10) {
    //        cout << num << endl;
    //        num++ ;
    //    }
    //在执行循环语句时候，程序必须提供跳出循环的出口， 否则出现死循环
    
    //添加随机数种子 作用利用当前系统时间生成随机数，防止每次随机数都一样
    //    srand((unsigned int)time(NULL));
    //系统生成随机数
    //    int num1 = rand() % 100 + 1;//rand()%100 + 1 生成0 + 1 ～ 99 + 1随机数
    //    cout << num1 << endl;
    //玩家进行猜测
    //    int val = 0;
    //
    //    while(true){
    //        cin >> val;
    //        //判断玩家猜测
    //        if (val > num1) {
    //            cout << "猜测过大" << endl;
    //        }else if(val < num1){
    //            cout << "猜测过小" << endl;
    //        }else{
    //            cout << "猜对了" << endl;
    //            break;//break 在循环中，可以利用该关键字来退出当前循环
    //        }
    //    }
    
    //猜对 退出游戏
    //猜错 提示猜的结果 过大或是过小 重新返回第2步
    
    //do...while循环语句
    //作用：满足循环条件，执行循环语句
    //语法：do{循环语句}while(循环条件);
    //与while的区别在于do...while会先执行一次循环语句，再判断循环条件
    //在屏幕中打印0～9这10个数字
    
    //    int num2 = 0;
    //    do{
    //        cout << num2 << endl;
    //        num2++;
    //    }while(num2 < 10);
    
    
    //求水仙花数
    //1、先打印所有的三位数字
    //    int num3 = 100;
    //    do{
    //        //2、从所有三位数字中找到水仙花数
    //        int a = 0;//个位
    //        int b = 0;//十位
    //        int c = 0;//百位
    //
    //        a = num3 % 10;//获取数字个位
    //        b = num3 / 10 % 10;//获取数字十位
    //        c = num3 / 100; //获取数字百位
    //
    //        if(a * a * a + b * b * b + c * c * c == num3){
    //            cout << num3 << endl;
    //        }
    //        num3++;
    //    }while(num3 < 1000);
    
    //for循环语句
    //作用：满足循环条件，执行循环语句
    //语法：for(起始表达式;条件表达式;末尾循环体){循环语句;}
    //在屏幕中打印0～9这10个数字
    //    for (int i =0; i < 10; i++) {
    //        cout << i << endl;
    //    }
    
    //for循环中的表达式，要用分号进行分隔，for中的初始值部分只执行一次
    //总结：while，do...while,for都是开发中常用的循环语句，for循环结构比较清晰，比较常见
    
    //敲桌子案例
    //1、先输出 1 ～ 100 数字
    //2、从100个数字找到特殊数字，打印“敲桌子”
    //如果是7的倍数、个位有7、或者十位有7、打印“敲桌子”
    //    for (int i =1; i <=100; i++) {
    //        if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
    //            cout << "敲桌子" << endl;
    //        }else{
    //            cout << i << endl;
    //        }
    //    }
    
    //利用嵌套循环实现星图
    //外层执行一次，内层执行一周
    //打印一行星图
    //外层循环
    for (int i = 0; i < 10; i++) {
        //内层循环
        for (int j = 0; j<10; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
    
    //乘法口诀表
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " * " << i << " = " << j * i << "  ";
        }
        cout << "\n";
    }
    
    
    
    return 0;
}
