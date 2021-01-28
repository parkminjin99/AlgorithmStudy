//
//  10844_쉬운 계단 수.cpp
//  DP
//
//  Created by 박민진 on 2021/01/22.
//  Copyright © 2021 박민진. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAX_N 101
#define NMOD 1000000000
int main()
{
    int DP[MAX_N][10] = {0,};
    int N, ans = 0;
    cin >> N;
    for(int i = 1; i < 10; i++) DP[1][i] = 1;
    for(int i = 2; i <= N; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(j == 0)          DP[i][j] = DP[i-1][1];
            else if(j == 9)     DP[i][j] = DP[i-1][8];
            else                DP[i][j] = (DP[i-1][j-1] + DP[i-1][j+1])%NMOD;
        }
    }
    for(int i = 0; i < 10; i++)
        ans = (ans + DP[N][i])%NMOD;
    cout << ans << endl;
    return 0;
}
