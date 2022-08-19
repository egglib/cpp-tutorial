//
//  main.cpp
//  struct
//
//  Created by mac on 2022/8/19.
//

#include <iostream>
using namespace std;
//结构体
//结构体属于用户自定义的数据类型，允许用户存储不同的数据类型

//结构体定义和使用
//语法：struct 结构体名 { 结构体成员列表 };

//通过结构体创建变量的方式有三种
//struct结构体名 变量名
//struct结构体名 变量名 = { 成员值1，成员值2...}
//定义结构体时顺便创建变量

struct Student{
    //成员列表
    string name;
    int age;
    int score;
}s3;

struct Teacher{
    int id;
    string name;
    int age;
    struct Student stu;
};

//值传递
void printStudent1(Student s){
    cout << s.name << s.age << endl;
}

//地址传递
void printStudent2(Student * s){
    cout << s->name << s->age << endl;
}

//将函数中的形参改为指针，可以减少内存空间，而且不会复制出新的副本出来
void printStu(const Student *stu){
    //stu->age = 100; 加入const之后，一旦有修改的操作就会报错，可以防止我们的误操作
    cout << "姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << endl;

}

//通过学生类型创建具体学生
// struct Student s1
// struct Student s2 = { ... }
int main(int argc, const char * argv[]) {
    //struct关键字可以省略
    Student s1;
    //struct Student s1;
    //给s1属性赋值，通过.访问结构体变量中的属性
    s1.name = "张三";
    s1.age= 18;
    s1.score = 100;
    cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;
    
    struct Student s2 = {"李四",19,80};
    cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;

    //定义结构体时顺便创建变量
    s3.name = "王五";
    s3.age = 20;
    s3.score = 60;
    
    cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 分数：" << s3.score << endl;
    
    //将自定义的结构体放入到数组中方便维护
    //struct 结构体名 数组名[元素个数] = {{},{},{}}
    struct Student stuArr[3] =
    {
        {"张三",18,100},
        {"李四",28,90},
        {"王五",38,80}
    };
    
    stuArr[2].name = "赵六";
    stuArr[2].age = 80;
    stuArr[2].score = 60;
    for (int i = 0; i < 3; i++) {
        cout
        << "姓名：" << stuArr[i].name
        << " 年龄：" << stuArr[i].age
        << " 分数：" << stuArr[i].score
        << endl;

    }
    
    //结构体指针
    //1、创建学生结构体变量
    struct Student s = {"张三",18,100};
    //2、通过指针指向结构体变量
    struct Student *p = &s;
    
    //3、通过指针访问结构体变量中的数据
    //通过结构体指针，访问结构体中的属性，需要利用 ‘->’
    cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
    
    //结构体嵌套
    Teacher teach;
    teach.id = 1000;
    teach.name = "老王";
    teach.age = 50;
    teach.stu.name = "小王";
    teach.stu.age = 20;
    teach.stu.score = 50;
    
    cout << "姓名：" << teach.name << " 年龄：" << teach.age << " 学生分数：" << teach.stu.score << endl;
    
    //结构体做函数参数
    //作用：将结构体作为参数向函数中传递
    struct Student s3;
    s3.name = "张三";
    s3.age = 20;
    s3.score = 100;
    cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 分数：" << s3.score << endl;
    
    printStudent1(s3);
    printStudent2(&s3);
    
    //结构体中const使用场景
    //作用：用const来防止误操作
    Student s4 = {"张三",15,70};
    printStu(&s4);
    
    return 0;
}
