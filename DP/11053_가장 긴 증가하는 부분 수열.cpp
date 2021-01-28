//
//  11053_가장 긴 증가하는 부분 수열.cpp
//  DP
//
//  Created by 박민진 on 2021/01/23.
//  Copyright © 2021 박민진. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAX_N 1001
#define MAX(x,y)( (x)>(y)?(x):(y) )
int main()
{
    int N, arr[MAX_N] = {0,};
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> arr[i];
    int DP[MAX_N] = {0,1,}, ans = DP[1];
    for (int i = 2; i <= N; i++)
    {
        int temp_ans = 0;
        for (int j = 1; j < i; j++)
            if(arr[j] < arr[i])
                temp_ans = MAX(DP[j], temp_ans);
        DP[i] = temp_ans + 1;
        ans = MAX(ans,DP[i]);
    }
    cout << ans << endl;
    return 0;
}
