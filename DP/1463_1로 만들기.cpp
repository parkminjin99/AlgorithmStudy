//
//  1463_1로 만들기.cpp
//  DP
//
//  Created by 박민진 on 2021/01/20.
//  Copyright © 2021 박민진. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAX_N 1000001
#define MIN(x,y)( (x)<(y)?(x):(y) )

int main()
{
    int N;
    cin >> N;
    int DP[MAX_N] = {0,};
    for(int i = 2; i <= N; i++)
    {
        DP[i] = DP[i-1];
        if(i%2 == 0)    DP[i] = MIN(DP[i],DP[i/2]);
        if(i%3 == 0)    DP[i] = MIN(DP[i], DP[i/3]);
        DP[i]++;
    }
    cout << DP[N] << endl;
    return 0;
}
