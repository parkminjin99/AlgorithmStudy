//
//  1912_연속합.cpp
//  DP
//
//  Created by 박민진 on 2021/01/25.
//  Copyright © 2021 박민진. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAX_N 100001
#define MAX(x,y)( (x)>(y)?(x):(y) )

int main()
{
    int N, arr[MAX_N] = {0,}, DP[MAX_N] = {0,};
    cin >> N;
    for(int i = 1; i <= N; i++)
        cin >> arr[i];
    DP[1] = arr[1];
    int ans = arr[1];
    for(int i = 2; i <= N; i++)
    {
        DP[i] = MAX(DP[i-1] + arr[i], arr[i]);
        ans = MAX(DP[i],ans);
    }
    cout << ans << endl;
    return 0;
}
