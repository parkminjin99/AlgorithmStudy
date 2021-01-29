//
//  10866_덱.cpp
//  자료구조
//
//  Created by 박민진 on 2021/01/30.
//  Copyright © 2021 박민진. All rights reserved.
//

#include <iostream>
#include <deque>
using namespace std;
int main()
{
    int N, x;
    string s;
    deque<int> dq;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        if(s == "push_front")
        {
            cin >> x;
            dq.push_front(x);
        }
        else if(s == "push_back")
        {
            cin >> x;
            dq.push_back(x);
        }
        else if(s == "pop_front")
        {
            if(dq.empty())      cout << -1 << '\n';
            else
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if(s == "pop_back")
        {
            if(dq.empty())      cout << -1 << '\n';
            else
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
        else if(s == "size")
        {
            cout << dq.size() << '\n';
        }
        else if(s == "empty")
        {
            if(dq.empty())      cout << 1 << '\n';
            else                cout << 0 << '\n';
        }
        else if(s == "front")
        {
            if(dq.empty())      cout << -1 << '\n';
            else                cout << dq.front() << '\n';
        }
        else // s = "back"
        {
            if(dq.empty())      cout << -1 << '\n';
            else                cout << dq.back() << '\n';
        }
    }
    return 0;
}
