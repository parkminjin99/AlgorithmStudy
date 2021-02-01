//
//  11655_ROT13.cpp
//  문자열
//
//  Created by 박민진 on 2021/02/02.
//  Copyright © 2021 박민진. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if('a' <= s[i] && s[i] <= 'z')
            cout << (char)((s[i]-'a'+13)%26+'a');
        else if('A' <= s[i] && s[i] <= 'Z')
            cout << (char)((s[i]-'A'+13)%26+'A');
        else
            cout << s[i];
    }
    cout << '\n';
    return 0;
}
