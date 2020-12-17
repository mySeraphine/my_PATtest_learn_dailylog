//“答案正确”是自动判题系统给出的最令人欢喜的回复。本题属于 PAT 的“答案正确”大派送 —— 只要读入的字符串满足下列条件，系统就输出“答案正确”，否则输出“答案错误”。
//得到“答案正确”的条件是：
//字符串中必须仅有 P、 A、 T这三种字符，不可以包含其它字符；
//任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
//如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a、 b、 c 均或者是空字符串，或者是仅由字母 A 组成的字符串。
//现在就请你为 PAT 写一个自动裁判程序，判定哪些字符串是可以获得“答案正确”的。
//每个测试输入包含 1 个测试用例。第 1 行给出一个正整数 n (<10)，是需要检测的字符串个数。接下来每个字符串占一行，字符串长度不超过 100，且不包含空格。
//每个字符串的检测结果占一行，如果该字符串可以获得“答案正确”，则输出 YES，否则输出 NO。

#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main()
{

    int i,N,n;
    string s;
    cin >> N;
    while (N--)
    {
        cin >> s;
        map<char, int>m;
        int p = 0, t = 0;
        n = s.length();
        for (i = 0;i < n;i++)
        {
            m[s[i]]++;
            if (s[i] == 'P')
                p = i;//此时的i为‘P’前‘A’的个数
            if (s[i] == 'T')
                t = i;//此时的i为‘T’在s中的位置
        }
        bool f;
        if (m['P'] == 1 && m['T'] == 1 && p < t&&m.size() == 3)
        {//确保P、T只有一个，且T在P后，字符串由P、A、T三种字符组成
            if (p*(t - p - 1) == n - t - 1)
                f = true;
            else
                f = false;
        }
        else
            f = false;
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}
