//卡拉兹(Callatz)猜想已经在1001中给出了描述。在这个题目里，情况稍微有些复杂。
//当我们验证卡拉兹猜想的时候，为了避免重复计算，可以记录下递推过程中遇到的每一个数。例如对 n=3 进行验证的时候，我们需要计算 3、5、8、4、2、1，则当我们对 n=5、8、4、2 进行验证的时候，就可以直接判定卡拉兹猜想的真伪，而不需要重复计算，因为这 4 个数已经在验证3的时候遇到过了，我们称 5、8、4、2 是被 3“覆盖”的数。我们称一个数列中的某个数 n 为“关键数”，如果 n 不能被数列中的其他数字所覆盖。
//现在给定一系列待验证的数字，我们只需要验证其中的几个关键数，就可以不必再重复验证余下的数字。你的任务就是找出这些关键数字，并按从大到小的顺序输出它们。
//每个测试输入包含 1 个测试用例，第 1 行给出一个正整数 K (<100)，第 2 行给出 K 个互不相同的待验证的正整数 n (1<n≤100)的值，数字间用空格隔开。
//每个测试用例的输出占一行，按从大到小的顺序输出关键数字。数字间用 1 个空格隔开，但一行中最后一个数字后没有空格。
//输入示例：
//6
//3 5 6 7 8 11
//输出示例：
//7 6

#include<iostream>
using namespace std;
class Kzm {				//每个数字对应一个类
public:
    int x;					//数字

    int k[5000];			//记录过程的数组
    int len;				//数组的实际长度
    void compute();			//计算过程数组
    void display();			//显示数组 用于测试
    bool exist(Kzm);			//判断某个数字是否存在于其他的过程数组
};
int numdel(int*,int,int);		//如果存在 将索引从结果数组中删除
int main()
{
    int k;					//数字个数
    int fori;				//用于循环的整形数字
    int i=0;
    int *num;				//结果数组，先将所有索引存入该数组，然后删除非关键数字的索引
    int j;
    int len;				//结果数组的实际长度
            scanf("%d",&k);			//输入k 数字个数
    len = k;				//初始化结果数组的长度
    Kzm *kzms;			//kzm类数组指针
            kzms = new Kzm[k];		//申请k个空间
            num = new int[k];		//为结果数组申请空间
    for (i = 0; i < k; i++) {		//输入要计算的数字
                scanf("%d", num + i);
    }
    for (i = 0; i < k; i++) {		//输入kzm对象
        kzms[i].x = num[i];
    }
    for (i = 0; i < k; i++) {		//对kzm对象初始化，计算过程数组和长度
        kzms[i].compute();
    }
    for (i = 0; i < k; i++) {		//初始化结果数组，置为索引
                num[i] = i;
    }
    for (i = 0; i < k; i++) {		//对所有kzm对象进行相互比较，删除被覆盖的数
        for (j = i + 1; j < k; j++) {
            if (kzms[i].exist(kzms[j])) {
                len = numdel(num, len, i);
            }
            if (kzms[j].exist(kzms[i])) {
                len = numdel(num, len, j);
            }
        }
    }
    for (i = len-1; i >=0; i--) {	//前面比较剔除的算法是稳定的，原数组是正序，现在倒叙输出
        if (i != 0) {
            cout << kzms[num[i]].x << " ";
        }
        else
            cout << kzms[num[i]].x;
    }
    return 0;
}
void Kzm::compute() {
    int val = x;
    int i;
    for (i = 0; val != 1; i++) {
        k[i] = val;
        if (val % 2 == 0) {
            val = val / 2;
        }
        else {
            val = val * 3 + 1;
            val = val / 2;
        }
    }
    k[i] = 1;
    len = i + 1;
    //display();
}
bool Kzm::exist(Kzm big) {
    int i;
    for (i = 1; i < big.len; i++) {
        if (k[0] == big.k[i])
            return true;
    }
    return false;
}
int numdel(int* num,int len,int i) {
    int j;
    for (j = 0; j < len; j++) {
        if (num[j] == i)
            break;
    }
    if (j == len)
        return len;
    for (; j < len; j++) {
        num[j] = num [ j + 1];
    }
    return len - 1;
}
void Kzm::display() {
    int i;
    for (i = 0; i < len; i++)
        cout << k[i]<<" " ;
    cout << endl;
}
