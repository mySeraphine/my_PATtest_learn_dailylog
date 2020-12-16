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
