//
//  9465_스티커.cpp
//  DP
//
//  Created by 박민진 on 2021/01/23.
//  Copyright © 2021 박민진. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAX_N 100001
#define MAX(x,y)( (x)>(y)?(x):(y) )
int main()
{
    int T, N;
    int arr[2][MAX_N] = {0,};
    int DP[MAX_N][2] = {0,};
    cin >> T;
    for (int i = 0; i <  T; i++)
    {
        cin >> N;
        for(int j = 1; j <= N; j++)
            cin >> arr[0][j];
        for(int j = 1; j <= N; j++)
            cin >> arr[1][j];
        DP[0][0] = DP[0][1] = 0;
        DP[1][0] = arr[0][1];   DP[1][1] = arr[1][1];
        for (int j = 2; j <= N; j++)
        {
            DP[j][0] = MAX(DP[j-1][1],DP[j-2][1]) + arr[0][j];
            DP[j][1] = MAX(DP[j-1][0],DP[j-2][0]) + arr[1][j];
        }
        cout << MAX(DP[N][0],DP[N][1]) << endl;
    }
    return 0;
}

//int main()
//{
//    int T, N;
//    int arr[2][MAX_N] = {0,};
//    int DP[MAX_N][3] = {0,};
//    cin >> T;
//    for (int i = 0; i <  T; i++)
//    {
//        cin >> N;
//        for(int j = 0; j < N; j++)
//            cin >> arr[0][j];
//        for(int j = 0; j < N; j++)
//            cin >> arr[1][j];
//        DP[0][0] = 0;   DP[0][1] = arr[0][0];   DP[0][2] = arr[1][0];
//        for (int j = 1; j < N; j++)
//        {
//            DP[j][0] = MAX(MAX(DP[j-1][0],DP[j-1][1]),DP[j-1][2]);
//            DP[j][1] = MAX(DP[j-1][0],DP[j-1][2]) + arr[0][j];
//            DP[j][2] = MAX(DP[j-1][0],DP[j-1][1]) + arr[1][j];
//        }
//        cout << MAX(MAX(DP[N-1][0],DP[N-1][1]),DP[N-1][2]) << endl;
//    }
//    return 0;
//}

