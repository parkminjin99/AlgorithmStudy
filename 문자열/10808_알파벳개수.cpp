//
//  10808_알파벳개수.cpp
//  문자열
//
//  Created by 박민진 on 2021/01/30.
//  Copyright © 2021 박민진. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int abc[26] = {0,};
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        abc[s[i]-'a']++;
    cout << abc[0];
    for (int i = 1; i < 26; i++)
        cout << " " << abc[i];
    cout << '\n';
    return 0;
}
