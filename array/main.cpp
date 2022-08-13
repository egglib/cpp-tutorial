//
//  main.cpp
//  array
//
//  Created by mac on 2022/8/13.
//

#include <iostream>
using namespace std;
//数组
//所谓数组，就是一个集合，里面存放了相同类型的数据元素
//特点1、数组中的每个数据元素都是相同的数据类型
//特点2、数组是由连续的内存位置组成的

int main(int argc, const char * argv[]) {

    //一维数组
    //三种定义方式：
    //1、数据类型 数组名[数组长度];
    
    //    int arr[5];
    //给数组中的元素进行赋值
    //数组元素的下标是从0开始索引的
    //    arr[0] = 10;
    //    arr[1] = 20;
    //    arr[2] = 30;
    //    arr[3] = 40;
    //    arr[4] = 50;
    
    //访问数据元素
    //    cout << arr[0] << endl;
    //    cout << arr[1] << endl;
    //    cout << arr[2] << endl;
    //    cout << arr[3] << endl;
    //    cout << arr[4] << endl;
    
    
    //2、数据类型 数组名[数组长度] = {值1,值2,值3,...};
    //如果在初始化数据的时候，没有全部填写完，会用0来填补剩余数据
    //    int arr2[5] = {10,20,30};
    //    cout << arr2[0] << endl;
    //    cout << arr2[1] << endl;
    //    cout << arr2[2] << endl;
    //    cout << arr2[3] << endl;
    //    cout << arr2[4] << endl;
    //利用循环输出数组中的元素
    //    for (int i = 0; i < 5; i++) {
    //        cout << arr2[i] << endl;
    //    }
    
    //3、数据类型 数组名[] = {值1,值2,值3,...};
    //int arr3[]; 定义数组的时候，必须有初始长度
    int arr3[] = {90,80,70,60,50,40,30,20,10};
    for (int i = 0; i<9; i++) {
        cout << arr3[i] << endl;
    }
    
    //数组名的命名规范与变量名命名规范一致，不要和变量重名

    //一位数组名称用途：
    //1、可以统计整个数组在内存中的长度
    cout << "totale size = " <<sizeof(arr3) << endl;
    cout << "per size = " <<sizeof(arr3[0]) << endl;
    cout << sizeof(arr3) / sizeof(arr3[0]) << endl;
    
    //2、可以获取数组在内存中的首地址
    cout << "first address = " << arr3 << endl;
    cout << "first address = " << &arr3[0] << endl;
    cout << "second address = " << &arr3[1] << endl;
    cout << "third address = " << &arr3[2] << endl;
    // arr3 = 100;err//数组名是常量，不可以进行赋值操作
    return 0;
    
}
