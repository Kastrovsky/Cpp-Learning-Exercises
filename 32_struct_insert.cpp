/*
 * 题号：32
 * 题目：结构体有序插入
 * 描述：学生成绩表按学号升序排序，插入一名新学生并保持有序；
 *      若学号重复则输出 error! 并拒绝插入。
 */
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string id;
    string name;
    int score1;
    int score2;
    int score3;
};
int main() {
    int n;
    cin >> n;
    
    Student stu[101];

    for(int i=0;i<n;i++)
    {
        cin >> stu[i].id >> stu[i].name >> stu[i].score1 >> stu[i].score2 >> stu[i].score3;
    }

    Student newStu;
    cin>>newStu.id >> newStu.name >> newStu.score1 >> newStu.score2 >> newStu.score3;
    for (int i = 0; i < n; i++) 
    {
        if (stu[i].id == newStu.id) {  // 学号重复
            cout << "error!" << endl;
            return 0;
        }
    }

    int insertPos=n;  // 默认插到末尾
    for(int i=0;i<n;i++)
    {
        if(newStu.id<stu[i].id)  // 找到插入位置
        {
            insertPos=i;
            break;
        }
    }
    // 元素后移
    for(int i=n;i>insertPos;i--)
    {
        stu[i]=stu[i-1];
    }
    stu[insertPos]=newStu;
    for (int i = 0; i < n + 1; i++)
    {
        cout << stu[i].id << " " << stu[i].name << " " 
             << stu[i].score1 << " " << stu[i].score2 << " " << stu[i].score3 << endl;
    }
    return 0;
}
