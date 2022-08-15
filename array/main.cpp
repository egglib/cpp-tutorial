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
    
    //五只小猪称体重
    //1、创建5只小猪体重的数组
    int arr4[] = {300,350,200,400,250};
    //2、从数组中找到最大值
    int max = 0;//先认定一个最大值为0
    for (int i = 0; i < 5; i++) {
        //cout << arr4[i] << endl;
        //如果访问的数组中的元素比我认定的最大值还要大，更新最大值
        if (arr4[i] > max) {
            max = arr4[i];
        }
    }
    //3、打印最大值
    cout << "最重小猪体重为：" << max << endl;
    
    //数组元素逆置
    //1、创建数组
    int arr5[] = {1,3,2,5,4};
    cout << "数组逆置前：" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr5[i] << endl;
    }
    
    //2、实现逆置
    //2.1 记录起始下标位置
    //2.2 记录结束下标位置
    //2.3 起始下标与结束下标的元素互换
    //2.4 起始位置++ 结束位置--
    //2.5 循环执行2.1操作，直到起始位置 >= 结束位置
    int start = 0;
    int end = sizeof(arr5)/sizeof(arr5[0]) - 1;
    
    while (start < end) {
        //元素互换
        int temp = arr5[start];
        arr5[start] = arr5[end];
        arr5[end] = temp;
        
        //下标更新
        start++;
        end--;
    }
    
    //3、打印逆置后的数组
    cout << "数组逆置后：" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr5[i] << endl;
    }
    
    //冒泡排序
    //作用：最常用的排序算法，对数组内元素进行排序
    //比较相邻的元素，如果第一个比第二个大，就交换他们两个；
    //对每一对相邻元素做同样的工作，执行完毕之后，找到第一个最大值
    //重复以上的步骤，每次比较次数-1，直到不需要比较
    int arr6[9] = {4,2,8,0,5,7,1,3,9};
    cout << "排序前结果：" << endl;
    for (int i = 0; i < 9; i++) {
        cout << arr6[i] << "  ";
    }
    cout << endl;
    
    //开始冒泡排序
    //总共排序轮数为  元素个数 - 1
    for (int i  = 0; i < 9 - 1; i++) {
        //内层循环对比 次数 = 元素个数 - 当前轮数 - 1
        for (int j = 0; j < 9 - i - 1; j++) {
            //如果第一个数字比第二个数字大，交换两个数字
            if (arr6[j] > arr6[j+1]) {
                int temp = arr6[j];
                arr6[j] = arr6[j+1];
                arr6[j+1] = temp;
            }
        }
    }
    
    cout << "排序后结果：" << endl;
    for (int i = 0; i < 9; i++) {
        cout << arr6[i] << "  ";
    }
    cout << endl;
    
    //二维数组 就是在一堆数组上，多加一个排序
    //二维数组定义方式有四种方式
    //1、数据类型 数组名 [行数][列数]
    int arr7[2][3];
    arr7[0][0] = 1;
    arr7[0][1] = 2;
    arr7[0][2] = 3;
    
    arr7[1][0] = 4;
    arr7[1][1] = 5;
    arr7[1][2] = 6;
    
    //    cout << arr7[0][0] <<endl;
    //    cout << arr7[0][1] <<endl;
    //    cout << arr7[0][2] <<endl;
    //    cout << arr7[1][0] <<endl;
    //    cout << arr7[1][1] <<endl;
    //    cout << arr7[1][2] <<endl;
    
    //外层打印行数，内层循环打印列数
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr7[i][j] << "";
        }
        cout << endl;
    }
    
    //2、数据类型 数组名 [行数][列数] = {{数据1,数据2},{数据3,数据4}};
    int arr8[2][3] = {{1,2,3},{4,5,6}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr8[i][j] << "";
        }
        cout << endl;
    }
    
    //3、数据类型 数组名 [行数][列数] = {数据1,数据2,数据3,数据4};
    int arr9[2][3] = {1,2,3,4,5,6};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr9[i][j] << "";
        }
        cout << endl;
    }
    
    //4、数据类型 数组名 [][列数] = {数据1,数据2,数据3,数据4};
    int arr10[][3] = {1,2,3,4,5,6};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr10[i][j] << "";
        }
        cout << endl;
    }
    
    //二维数组数组名
    //查看二维数组所占内存空间大小
   
    int arr11[2][3] = {{1,2,3},{4,5,6}};
    cout << "二维数组占用的内存空间为：" << sizeof(arr11) << endl;
    cout << "二维数组第一行占用的内存空间为：" << sizeof(arr11[0]) << endl;
    cout << "二维数组第一个元素占用的内存为：" << sizeof(arr11[0][0]) << endl;
    cout << "二维数组行数为：" << sizeof(arr11)/sizeof(arr11[0]) << endl;
    cout << "二维数组列数为：" << sizeof(arr11[0])/sizeof(arr11[0][0]) << endl;
    
    //获取二维数组首地址
    cout << "二维数组首地址：" << arr11 << endl;
    cout << "二维数组第一行首地址：" << &arr11[0] << endl;
    cout << "二维数组第二行首地址：" << &arr11[1] << endl;
    cout << "二维数组第一个元素的首地址：" << &arr11[0][0] << endl;
    cout << "二维数组第二个元素的首地址：" << &arr11[0][1] << endl;

    //统计考试成绩
    //创建二维数组
    int scores[3][3] = {{100,100,100},{90,50,100},{60,70,80}};
    for (int i = 0; i < 3; i++) {
        int sum = 0;//统计分数总和变量
        for (int j = 0; j < 3; j++) {
            sum += scores[i][j];
        }
        cout << "第" << i+i << "个人总和为："<<sum << endl;
    }
    
    return 0;
    
}
