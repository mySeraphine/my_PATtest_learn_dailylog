#include<iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int num_in[100];
    int i=0;
    char c;
    int N,M;         //输入的N和M的
    int count=0;        //记录输出的数字的数目
    cin>>N>>M;
    if(N<0||N>100||M<0)    //限制大小和错误处理
    {
        return 0;
    }
    M=M%N;              //未限制M<N,移位只需要求余数
    c=getchar();         //获取输入字符
    while(i<N)  //终止条件为数组中的数达到应有的存储数目
    {
        c=getchar();  //获取输入字符
        if((c>='0'&&c<='9')||c=='-')  //输入正整数、负整数
		{
			ungetc(c,stdin);
			cin>> num_in[i++];
		}
    }

      for(int j=N-M;j<N;j++)   //输出N-M到N-1号
    {
        cout<<num_in[j];
        count++;
        if(count<N) cout<<' ';
    }
    for(int j=0;j<N-M;j++)   //输出0号到N-M-1号
    {
        cout<<num_in[j];
        count++;
        if(count<N) cout<<' ';
    }
    return 0;
}

