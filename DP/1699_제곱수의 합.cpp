//
//  1699_제곱수의 합.cpp
//  DP
//
//  Created by 박민진 on 2021/01/25.
//  Copyright © 2021 박민진. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAX_N 100001
#define MIN(x,y)( (x)<(y)?(x):(y) )

int main()
{
    int N, DP[MAX_N] = {0,1,};
    cin >> N;
    for (int i = 2; i <= N; i++)
    {
        DP[i] = MAX_N;
        for(int j = 1; j*j <= i; j++)
            DP[i] = MIN(DP[i],DP[i-j*j]+1);
    }
    cout << DP[N] << endl;
    return 0;
}
