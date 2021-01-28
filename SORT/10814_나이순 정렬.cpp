//
//  10814_나이순 정렬.cpp
//  DP
//
//  Created by 박민진 on 2021/01/29.
//  Copyright © 2021 박민진. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
/*
    stable_sort()는 구조체처럼 여러 값들이 묶여 있을 때
    하나의 요소로 정렬 했을 때 다른 요소들의 정렬 순서도 정렬 전과 같이 그대로 유지하도록 하는 정렬
 */

bool cmp(const pair<int,string>& a, const pair<int,string>& b)
{
    return a.first < b.first;
}
int main()
{
    FIO;
    int N;
    vector<pair<int,string>> v;
    cin >> N;
    v.resize(N);
    for (int i = 0; i < N; i++)
        cin >> v[i].first >> v[i].second;
    stable_sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < N; i++)
        cout << v[i].first << " " << v[i].second << '\n';
    return 0;
}
