/*
 * 题号：33
 * 题目：student 类与友元函数
 * 描述：定义 student 类（学号、成绩为私有成员），用友元函数找出成绩最高的学生并输出其学号
 *      （并列最高分时按输入顺序全部输出，空格分隔）。
 */
#include <iostream>
using namespace std;

class student {
private:
    int id;
    int score;
public:
    void setData(int i, int s) {
        id = i;
        score = s;
    }
    
    int getId() { return id; }
    int getScore() { return score; }
    
    friend student* average(student *p, int count);  // 友元函数可访问私有成员
};

// 返回数组中第一个成绩最高的学生地址
student* average(student *p, int count) {
    if (count == 0) return nullptr;
    
    student* maxStudent = p;
    for (int i = 1; i < count; i++) {
        if (p[i].score > maxStudent->score) {
            maxStudent = &p[i];
        }
    }
    return maxStudent;
}

int main() {
    student stu[100];
    int id, score;
    int count = 0;
    
    // 读取输入，学号为 0 时结束
    while (cin >> id && id != 0) {
        cin >> score;
        stu[count].setData(id, score);
        count++;
    }
    
    if (count == 0) return 0;
    
    student* maxStu = average(stu, count);
    int maxScore = maxStu->getScore();
    
    // 输出所有并列最高分学生的学号
    bool first = true;
    for (int i = 0; i < count; i++) {
        if (stu[i].getScore() == maxScore) {
            if (!first) {
                cout << " ";
            }
            cout << stu[i].getId();
            first = false;
        }
    }
    cout << endl;
    
    return 0;
}
