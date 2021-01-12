// 정수 N이 주어졌을 때 소인수분해 하는 프로그램
#include <iostream>
#include <cmath>
using namespace std;
#define MAX_N 10000

int main()
{
    int N;
    bool check[MAX_N+1] = {0,};
    cin >> N;
    for(int i = 2; i <= sqrt(MAX_N); i++)
    {
        if(check[i] == 1)   continue;
        for(int j = i+i; j <= MAX_N; j += i)
            check[j] = 1;
    }
    for(int i = 2; i*i <= N; i++)
    {
        if(check[i] == 1)   continue;
        while(N%i == 0)
        {
            N /= i;
            cout << i << endl;
        }
    }
    if(N != 1)  cout << N << endl;
    return 0;
}