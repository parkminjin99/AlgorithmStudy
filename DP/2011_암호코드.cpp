//
//  2011_암호코드.cpp
//  DP
//
//  Created by 박민진 on 2021/01/27.
//  Copyright © 2021 박민진. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
#define NMOD 1000000
#define MAX_N 5001

int arr[MAX_N];

int main()
{
    string N;
    int DP[MAX_N] = {0,}, temp;
    cin >> N;
    if(N[0] == '0') // 암호의 시작이 0일 경우 해석 불가능
    {
        cout << 0;
        return 0;
    }
    DP[0] = DP[1] = 1;
    for(int i = 2; i <= N.size(); i++)
    {
        char a = N[i-1], b = N[i-2];
        temp = 10*(N[i-2]-'0') + (N[i-1]-'0');
        if(a == '0' && b == '0') // 두자리 모두 0인 경우
        {
            cout << 0 << endl;
            return 0;
        }
        if(a != '0')    // 해당자리가 0이 아닌 경우
            DP[i] = DP[i-1]%NMOD;
        if(1 <= temp && temp <= 26 && b != '0') // 이전자리가 0이 아닌 경우 & temp가 1과 26사이인 경우
            DP[i] = (DP[i] + DP[i-2])%NMOD;
    }
    cout << DP[N.size()] << endl;
    return 0;
}
