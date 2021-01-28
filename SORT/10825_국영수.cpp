//
//  10825_국영수.cpp
//  DP
//
//  Created by 박민진 on 2021/01/29.
//  Copyright © 2021 박민진. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 100000
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

typedef struct _LIST_{
    string name;
    int a,b,c;
} LIST;
bool cmp(const LIST& A, const LIST& B)
{
    if(A.a == B.a)
    {
        if(A.b == B.b)
        {
            if(A.c == B.c)  return A.name < B.name;
            else            return A.c > B.c;
        }
        else
            return A.b < B.b;
    }
    else
        return A.a > B.a;
}
int main()
{
    FIO;
    int N;
    LIST list[MAX_N];
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> list[i].name >> list[i].a >> list[i].b >> list[i].c;
    sort(list,list+N,cmp);
    for (int i = 0; i < N; i++)
        cout << list[i].name << '\n';
    return 0;
}
