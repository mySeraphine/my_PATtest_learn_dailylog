#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 1010;
//创建结构体
struct mooncake
{
    double store; //总库存
    double sell; //总售价
    double price; //单价
}cake[1010];

bool cmp(mooncake a, mooncake b)
{
    return a.price > b.price;
}

int main()
{
    int n;
    double D;
    scanf("%d%lf", &n, &D);
    for(int i = 0; i < n; i++)
    {
        scanf("%lf", &cake[i].store);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &cake[i].sell);
        cake[i].price = cake[i].sell/cake[i].store;
    }
    sort(cake, cake + n, cmp);
    double ans = 0; //计算总价
    for (int i = 0; i < n; i++)
    {
        if (D == 0) break;
        if (cake[i].store <= D) //如果库存量小于需求量
        {
            D -= cake[i].store; //将第i种全部卖掉
            ans += cake[i].sell; //将第i种的总售价加上
        }
        else
        {
            ans += cake[i].price * D;
            D = 0;
        }
    }
    printf("%.2f\n",ans);

}
