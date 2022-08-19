//
//  main.cpp
//  pointer


#include <iostream>
using namespace std;
//指针
//指针的作用：可以通过指针间接访问内存
//内存编号是从0开始记录的，一般用十六进制数字表示
//可以利用指针变量保存地址

//实现两个数字进行交换
void swap01(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}

void swap02(int *p1,int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

//冒泡排序函数 参数1 数组的首地址 参数2 数组的长度
void bubbleSort(int * arr,int len){
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i -1; j++) {
            //如果j > j + 1的值 交换数字
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int *arr,int len){
    for (int i = 0; i <len; i++) {
        cout << "printArray---" <<arr[i] << endl;
    }
}

int main(int argc, const char * argv[]) {
    //1、定义指针
    int a = 10;
    //指针定义的语法：数据类型 *指针变量名；
    int *p;
    //让指针记录变量a的地址
    p = &a;
    cout << "a的地址为："<< &a << endl;
    cout << "p的值为："<< p << endl;
    
    //2、使用指针
    //可以通过解引用的方式来找到指针指向的内存
    //指针前加 * 代表解引用，找到指针指向的内存中的数据
    *p = 1000;
    cout << "a = "<< a << endl;
    cout << "*p = "<< *p << endl;
    
    //指针所占内存空间
    //指针也是种数据类型，那么这种数据类型所占用多少内存空间？
    //在32位操作系统下，占用4个字节空间
    //在64位操作系统下，占用8个字节空间
    cout << "sizeof int * = " << sizeof(int *) << endl;
    cout << "sizeof float * = " << sizeof(float *) << endl;
    cout << "sizeof double * = " << sizeof(double *) << endl;
    cout << "sizeof char * = " << sizeof(char *) << endl;
    
    //空指针和野指针
    //空指针：指针变量指向内存中编码为0的空间
    //用途：初始化指针变量
    //注意：空指针指向的内存是不可以访问的
    //1、空指针用于给指针变量进行初始化
    //int *p1 = NULL;
    //2、空指针是不可以进行访问的
    //0~255之间的内存编号是系统占用的，因此不可以进行访问
    //*p1 = 100;
    
    //野指针：指针变量指向非法的内存空间
    //int *p2 = (int *)0x111000;
    //在程序中，尽量避免出现野指针
    //cout << *p2 << endl;
    //空指针和野指针都不是申请的空间，因此不要访问
    
    //const修饰指针
    //const修饰指针有三种情况
    //1、const修饰指针 ...常量指针
    //2、const修饰常量 ...指针常量
    //3、const既修饰指针，又修饰常量
    
    //常量指针
    //指针的指向可以修改，但是指针指向的值不可以修改
    const int * p3 = &a;
    
    //指针常量
    //指针的指向不可以修改，但是指针指向的值可以修改
     int * const p4 = &a;
    
    //指针的指向和指针指向的值都不可以修改
    const int * const p5 = &a;
    
    //1.const修饰指针 常量指针
    int a1 = 10;
    int b1 = 20;
    
    const int * p6 = &a1;
    //指针指向的值不可以改，指针的指向可以改
    p6 = &b1;//正确
    //*p6 = 20; //错误
    
    //2、const 修饰常量 指针常量
    //指针的指向不可以改，指针指向的值可以改
    int * const p7 = &a1;
    *p7 = 100;
    //p7 = &b1;//错误,指针的指向不可以改
    
    //3、const既修饰指针，又修饰常量
    const int * const p8 = &a1;
    //指针的指向和指针指向的值都不可以修改
    
    
    //指针和数组
    //利用指针访问数组中的元素
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "第一个元素为："<< arr[0] <<endl;
    int * p9 = arr;//arr就是数组首地址
    cout << "利用指针访问第一个元素："<< *p9 <<endl;
    
    p9++;//让指针向后偏移4个字节
    cout << "利用指针访问第二个元素："<< *p9 <<endl;
    
    int *p10 = arr;
    for (int i = 0; i < 10; i++) {
        cout << *p10 <<endl;
        p10++;
    }
    
    //指针和函数
    //作用：利用指针作函数参数，可以修改实参的值
    
    //1、值传递
    //不会改变实参的值
    swap01(a1,b1);
    cout << "a1 = " << a1 << endl;
    cout << "b1 = " << b1 << endl;
    
    //2、地址传递
    //会改变实参的值
    swap02(&a1,&b1);
    cout << "a1 = " << a1 << endl;
    cout << "b1 = " << b1 << endl;

    //指针、数组、函数
    //案例描述：封装一个函数，利用冒泡排序，实现对整型数组的升序排序
    
    //创建数组
    int arr1[10] = {4,3,6,9,1,2,10,8,7,5};
    
    int len = sizeof(arr1) / sizeof(arr1[0]);
    //创建函数，实现冒泡排序
    bubbleSort(arr1, len);
    
    //打印排序后的数组
    printArray(arr1, len);
    
    return 0;
}
