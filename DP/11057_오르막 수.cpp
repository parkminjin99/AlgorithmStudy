//
//  11057_오르막 수.cpp
//  DP
//
//  Created by 박민진 on 2021/01/22.
//  Copyright © 2021 박민진. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAX_N 1001
#define NMOD 10007
int main()
{
    int DP[MAX_N][10] = {0,};
    int N, ans = 0;
    cin >> N;
    for(int i = 0; i < 10; i++) DP[1][i] = 1;
    for(int i = 2; i <= N; i++)
    {
        for(int j = 0; j < 10; j++)
            for(int k = 0; k <= j; k++)
                DP[i][j] = (DP[i][j] + DP[i-1][k])%NMOD;
    }
    for(int i = 0; i < 10; i++)
        ans = (ans + DP[N][i])%NMOD;
    cout << ans << endl;
    return 0;
}
