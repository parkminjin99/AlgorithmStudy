//
//  11727_2xn 타일링2.cpp
//  DP
//
//  Created by 박민진 on 2021/01/20.
//  Copyright © 2021 박민진. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAX_N 1001
int main()
{
    int N;
    cin >> N;
    int DP[MAX_N] = {0,1,3,};
    for(int i = 3; i <= N; i++)
    {
        DP[i] = (DP[i-2]*2 + DP[i-1])%10007;
    }
    cout << DP[N] << endl;
    return 0;
}
