//定义dn为：dn=P(n+1)−Pn，其中pi是第i个素数。显然有d1=1，且对于n>1有d是偶数。“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。
//现给定任意正整数N(<10^5)，请计算不超过N的满足猜想的素数对的个数。
//输入在一行给出正整数N。
//在一行中输出不超过N的满足猜想的素数对的个数。
//输入示例：20
//输出示例：4

#include <iostream>

using namespace std;
bool isPrime (int n);

int main()
{
    int N, counter=0;
    cin>> N;

    for (int i = 3; i<N-1; i+=2)
    {
        if (isPrime(i) && isPrime(i + 2))
            counter++;
    }
    cout << counter << endl;
    return 0;
}

bool isPrime (int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i*i <= n; i++)//在sqrt（n）前就可以
    {
        if (n % i ==0)
            return false;
    }
    return true;
}

