#include <iostream>
#include <vector>
bool isPrime(int num);

using namespace std;
int start = 2;
vector<int> primes;
int main() {
    int fn, ln, cnt = 1;

    primes.reserve(20);
    //input
    cin >> fn >> ln;

    while (cnt <= ln) {
        if (isPrime(start)){
            primes.push_back(start);
            cnt++;
        }
        ++start;
    }
    int column = (ln - fn +1) /10;
    if (column>0){
        for (int i = 0; i < column; ++i) {

            printf("%d %d %d %d %d %d %d %d %d %d\n",
                   primes[fn+i*10-1],
                   primes[fn+1+i*10-1],
                   primes[fn+2+i*10-1],
                   primes[fn+3+i*10-1],
                   primes[fn+4+i*10-1],
                   primes[fn+5+i*10-1],
                   primes[fn+6+i*10-1],
                   primes[fn+7+i*10-1],
                   primes[fn+8+i*10-1],
                   primes[fn+9+i*10-1]);
        }
        int more = (ln - fn +1)%10;
        for (int i = 1; i <= more; ++i) {
            printf("%d", primes[fn+(column-1)*10+8+i]);
            if (i != more)
                printf(" ");
        }
        printf("\n");
    } else{
        int more = (ln - fn +1)%10;
        for (int i = 1; i <= more; ++i) {
            printf("%d", primes[fn+(column-1)*10+8+i]);
            if (i != more)
                printf(" ");
        }
        printf("\n");
    }
    return 0;

}



bool isPrime(int num)
{
    for (int i = 2; i*i <= num; ++i) {
        if (num % i == 0)
        {
            return false;

        }
    }
    return true;
}
