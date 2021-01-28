//
//  11650_좌표정렬하기.cpp
//  DP
//
//  Created by 박민진 on 2021/01/29.
//  Copyright © 2021 박민진. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    FIO;
    int N;
    vector<pair<int,int>> xy;
    cin >> N;
    xy.resize(N);
    for (int i = 0; i < N; i++)
        cin >> xy[i].first >> xy[i].second;
    sort(xy.begin(), xy.end());
    for(int i = 0; i < N; i++)
        cout << xy[i].first << " " << xy[i].second << '\n';
    return 0;
}
