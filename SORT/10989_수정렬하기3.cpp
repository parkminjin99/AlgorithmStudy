//
//  10989_수정렬하기3.cpp
//  DP
//
//  Created by 박민진 on 2021/01/29.
//  Copyright © 2021 박민진. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAX_N 10001
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main()
{
    FIO;
    int T, temp, num[MAX_N] = {0,};
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> temp;
        num[temp]++;
    }
    for (int i = 1; i < MAX_N; i++)
        for (int j = 0; j < num[i]; j++)
            cout << i << '\n';
    return 0;
}
