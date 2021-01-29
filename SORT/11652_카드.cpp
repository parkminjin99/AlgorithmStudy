//
//  11652_카드.cpp
//  DP
//
//  Created by 박민진 on 2021/01/29.
//  Copyright © 2021 박민진. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 100000
#define MAX(x,y)( (x)>(y)?(x):(y) )
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
int main()
{
    FIO;
    int N;
    cin >> N;
    long long arr[MAX_N] = {0,};
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    sort(arr, arr+N);
    
    long long temp = arr[0], temp_cnt = 1, ans = 0, ans_i = arr[0];
    for(int i = 1; i < N; i++)
    {
        if(temp == arr[i])
            temp_cnt++;
        else
        {
            if(ans < temp_cnt)
            {
                ans = temp_cnt;
                ans_i = temp;
            }
            temp = arr[i];
            temp_cnt = 1;
        }
    }
    if(ans < temp_cnt)
    {
        ans = temp_cnt;
        ans_i = temp;
    }
    cout << ans_i << '\n';
    return 0;
}
