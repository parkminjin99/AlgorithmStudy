//
//  2156_포도주 시식.cpp
//  DP
//
//  Created by 박민진 on 2021/01/23.
//  Copyright © 2021 박민진. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAX_N 10000
#define MAX(x,y)( (x)>(y)?(x):(y) )
int main()
{
    int N, arr[MAX_N] = {0,};
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    int DP[MAX_N][2] = {0,};
    DP[0][0] = 0;           DP[0][1] = arr[0];
    DP[1][0] = DP[0][1];    DP[1][1] = DP[0][1] + arr[1];
    for(int i = 2; i < N; i++)
    {
        DP[i][0] = MAX(DP[i-1][0], DP[i-1][1]);
        DP[i][1] = MAX(MAX(DP[i-2][1], DP[i-2][0]+arr[i-1]),DP[i-2][0]) + arr[i];
    }
    cout << MAX(DP[N-1][0], DP[N-1][1]) << endl;
    return 0;
}


