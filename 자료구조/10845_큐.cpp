//
//  10845_큐.cpp
//  자료구조
//
//  Created by 박민진 on 2021/01/30.
//  Copyright © 2021 박민진. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int N, x;
    string s;
    queue<int> q;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        if(s == "push")
        {
            cin >> x;
            q.push(x);
        }
        else if(s == "pop")
        {
            if(q.empty())
                cout << -1 << '\n';
            else
            {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if(s == "size")
        {
            cout << q.size() << '\n';
        }
        else if(s == "empty")
        {
            if(q.empty())   cout << 1 << '\n';
            else            cout << 0 << '\n';
        }
        else if(s == "front")
        {
            if(q.empty())   cout << -1 << endl;
            else            cout << q.front() << '\n';
        }
        else // s = "back"
        {
            if(q.empty())   cout << -1 << endl;
            else            cout << q.back() << '\n';
        }
    }
    return 0;
}
