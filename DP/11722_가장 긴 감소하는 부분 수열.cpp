//
//  11722_가장 긴 감소하는 부분 수열.cpp
//  DP
//
//  Created by 박민진 on 2021/01/24.
//  Copyright © 2021 박민진. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAX_N 1001
#define MAX(x,y)( (x)>(y)?(x):(y) )

int main()
{
    int N, arr[MAX_N], DP[MAX_N] = {0,}, ans;
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> arr[i];
    ans = DP[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if(arr[j] > arr[i])
                DP[i] = MAX(DP[i],DP[j]);
        }
        DP[i]++;
        ans = MAX(ans,DP[i]);
    }
    cout << ans << endl;
    return 0;
}
