/*
 * 题号：39
 * 题目：蓝桥杯——数字封闭图形排序
 * 描述：数字按“封闭图形”个数排序：个数少者在前；个数相同则数值小者在前。
 *      其中 0/4/6/9 计 1 个圈，8 计 2 个圈，其余计 0 个。输入 n 个数并排序输出。
 */
#include <iostream>      // 输入输出流
#include <algorithm>     // 排序函数 sort
#include <vector>        // 动态数组 vector
using namespace std;     // 使用标准命名空间

// 计算一个整数的封闭图形（圈数）个数
int countcir(int x) {
    int cnt = 0;          // 圈数
    if (x == 0) return 1; // 0 计 1 个圈
    
    while (x > 0) {
        int digit = x % 10;      // 取最低位数字
        if (digit == 0 || digit == 4 || digit == 6 || digit == 9) {
            cnt++;               // 这些数字各 1 个圈
        } else if (digit == 8) {
            cnt += 2;            // 8 计 2 个圈
        }
        // 其余数字（1,2,3,5,7）不计圈
        x /= 10;                 // 去掉最低位
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    // 自定义排序：先比圈数，再比数值，均升序
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int ca = countcir(a);
        int cb = countcir(b);
        if (ca != cb) {
            return ca < cb;
        } else {
            return a < b;
        }
    });
    
    for (int i = 0; i < n; i++) {
        cout << nums[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
    
    return 0;
}
