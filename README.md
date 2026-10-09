# C++ 学习练习题合集

> 个人学习 C++ 过程中写的练习题代码，适合 C++ 入门学习者参考，仅用于学习交流。

## 项目简介

本仓库收集了本人在 C++ 入门学习阶段练习的各类编程题目，涵盖基础语法、数组与矩阵、字符串处理、指针、结构体、类与对象、继承与多态、递归与算法等常见考点。每道题均为独立可编译的源文件，方便逐题阅读与运行。

## 编译环境

- 操作系统：Windows / Linux / macOS 均可
- 编译器：支持 C++11 及以上标准的 `g++`（如 MinGW-w64、GCC、Clang）
- 无需第三方依赖，全部使用标准库

## 编译 & 运行命令

每道练习题都是独立源文件（各自拥有 `main` 函数），单独编译即可：

```bash
# 进入仓库目录
cd Cpp-Learning-Exercises

# 编译单个题目（以 01 为例）
g++ 01_decimal_to_oct_hex.cpp -o 01 -std=c++11

# 运行
./01            # Linux / macOS
01.exe          # Windows
```

如需批量编译，可使用脚本（示例，Linux / macOS）：

```bash
for f in *.cpp; do g++ "$f" -o "${f%.cpp}" -std=c++11; done
```

> 提示：部分题目（如青蛙爬井、足球赛、扫雷等）对输入格式敏感，请严格按照题目要求的样例输入运行。

## 目录结构说明

```
Cpp-Learning-Exercises/
├── README.md                  # 项目说明（本文件）
├── LICENSE                    # MIT 开源协议
├── .gitignore                 # 忽略编译产物与 IDE 缓存
├── 01_decimal_to_oct_hex.cpp  # 十进制转八进制/十六进制
├── 02_prime_check.cpp         # 质数判断
├── 03_primes_under_n.cpp      # n 以内素数（每行 5 个）
├── 04_gcd_euclidean.cpp       # 欧几里得算法求最大公约数
├── 05_fibonacci.cpp           # 斐波那契数列
├── 06_matrix_transpose.cpp    # 矩阵转置
├── 07_divisors.cpp            # 区间内能整除 n 的数
├── 08_sum_until_zero.cpp      # 累加输入直到遇到 0
├── 09_frog_well.cpp           # 青蛙爬井
├── 10_two_diagonals.cpp       # 同时输出两条对角线
├── 11_matrix_edge_sum.cpp     # 矩阵边缘元素之和
├── 12_pascal_triangle.cpp     # 杨辉三角
├── 13_truncate_integer.cpp    # 截整数（取前 m 位）
├── 14_prime_base_conversion.cpp # 素数进制转换
├── 15_insert_sorted.cpp       # 向有序序列插入整数
├── 16_average_function.cpp    # 函数求两数平均数
├── 17_array_insert.cpp        # 数组插入数
├── 18_football_match.cpp      # 足球赛积分排名
├── 19_minesweeper.cpp         # 扫雷（7-17）
├── 20_beautify_string.cpp     # 美化字符串（相邻去重）
├── 21_string_replace.cpp      # 字符串区间替换
├── 22_next_sunday.cpp         # 下一个周日（7-10）
├── 23_camel_to_words.cpp      # 驼峰命名转单词
├── 24_abbreviation.cpp        # 首字母缩写
├── 25_hanoi.cpp               # 汉诺塔
├── 26_set_product_dedup.cpp   # 集合乘积排序去重
├── 27_athlete_stats.cpp       # 运动员平均数与标准差
├── 28_dynamic_score_stats.cpp # 动态内存学生成绩统计
├── 29_palindrome.cpp          # 判断字符串回文（7-20）
├── 30_pointer_2d_access.cpp   # 指针访问二维数组
├── 31_word_reverse.cpp        # 单词翻转（7-12）
├── 32_struct_insert.cpp       # 结构体有序插入
├── 33_student_class.cpp       # student 类与友元函数
├── 34_point_distance.cpp      # Point 类两点距离
├── 35_extract_digits_sum.cpp  # 字符串提取数字求和（7-7）
├── 36_find_peak.cpp           # 寻找高山（7-8）
├── 37_student_management.cpp  # 学生成绩管理系统（7-9）
├── 38_parcel_inheritance.cpp  # 快递包裹继承与多态
└── 39_number_sort_circles.cpp # 蓝桥杯：数字封闭图形排序
```

> 注：源文件编号即题号，每个文件头部均标注了题号与题目简述，方便检索。

## 使用须知

- 本仓库代码**仅用于学习参考**，练习题的解法**不唯一**，请勿直接当作标准答案提交作业。
- 代码由学习阶段整理而来，**不保证是最优解**，也可能存在可优化的空间（例如部分边界处理、循环写法等），欢迎讨论与改进。
- 若你在练习中发现了更优或更严谨的写法，欢迎提交 Issue 或 Pull Request。
- 如果本仓库对你有帮助，欢迎 **Star / Fork** ⭐。

## 开源协议

本项目基于 [MIT License](./LICENSE) 开源，可自由使用、修改与分发，请保留版权声明与许可声明。
