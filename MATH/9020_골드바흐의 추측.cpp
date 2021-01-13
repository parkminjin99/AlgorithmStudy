#include<iostream>
using namespace std;
#define MAX_N 10001
int main()
{
    int T, N, left, right;
    bool check[MAX_N+1] = {0,};
    for(int i = 2; i*i <= MAX_N; i++)
    {
        if(check[i] == 1)   continue;
        for(int j = i+i; j <= MAX_N; j += i)
            check[j] = 1;
    }

    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin >> N;
        left = N/2;
        right = N-left;
        while(1)
        {
            if(check[left] == 0 && check[right] == 0)
                break;
            left--;
            right++;
        }
        cout << left << " " << right << endl;
    }   
    return 0;
}