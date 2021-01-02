
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    char jia, yi;
    int jiawin = 0, yiwin = 0, ping = 0;
    int jiaC = 0, jiaJ = 0, jiaB = 0;//甲出锤子，剪子，布赢的计数
    int yiC = 0, yiJ = 0, yiB = 0;//乙出锤子，剪子，布赢的计数

    while (N > 0) {
        cin >> jia >> yi;

        if (jia == 'C') {
            if (yi == 'J') {
                jiawin++;
                jiaC++;
            } else if (yi == 'B') {
                yiwin++;
                yiB++;
            } else if (yi == 'C') {
                ping++;
            }

        } else if (jia == 'J') {
            if (yi == 'J') {
                ping++;
            } else if (yi == 'B') {
                jiawin++;
                jiaJ++;
            } else if (yi == 'C') {
                yiwin++;
                yiC++;
            }

        } else if (jia == 'B') {
            if (yi == 'J') {
                yiwin++;
                yiJ++;
            } else if (yi == 'B') {
                ping++;
            } else if (yi == 'C') {
                jiawin++;
                jiaB++;
            }
        }

        N--;
    }
    cout << jiawin << " " << ping << " " << yiwin << endl;
    cout << yiwin << " " << ping << " " << jiawin << endl;

    //most gesture
    char A, B;
    int jiamost = jiaB >= jiaC ? (jiaB >= jiaJ ? jiaB : jiaJ) : (jiaC >= jiaJ ? jiaC : jiaJ);
    if (jiamost == jiaB) {
        A='B';
    } else if (jiamost == jiaC){
        A='C';
    } else {
        A='J';
    }
    int yimost = yiB >= yiC ? (yiB >= yiJ ? yiB : yiJ) : (yiC >= yiJ ? yiC : yiJ);//题目要求如果结果不唯一，就优先输出字母序最小的解，所以有限比较出B,出C,最后出J的
    if (yimost == yiB) {
        B='B';
    } else if (yimost == yiC){
        B='C';
    } else {
        B='J';
    }

    cout << A << " " << B << endl;
    return 0;
}
