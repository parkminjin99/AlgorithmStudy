#include<iostream>
using namespace std;
#define MAX_N 123456*2
int main()
{
    bool check[MAX_N+1] = {0,};
    for(int i = 2; i*i <= MAX_N; i++)
    {
        if(check[i] == 1)   continue;
        for(int j = i+i; j <= MAX_N; j += i)
            check[j] = 1;
    }
    int N;
    while(1)
    {
        int answer = 0;
        cin >> N;
        if(N == 0)  break;
        for(int i = N+1; i <= 2*N; i++)
        {
            if(check[i] == 0)   answer++;
        }
        cout << answer << endl;
    }
    return 0;
}
