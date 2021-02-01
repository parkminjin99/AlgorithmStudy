//
//  10820_문자열분석.cpp
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
    while(1)
    {
        string s;
        getline(cin, s); // 공백을 포함해서 입력받음
        if(s.length() == 0)   break;
        int ans[4] = {0,};
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] == ' ')
                ans[3]++;
            else if('a' <= s[i] && s[i] <= 'z')
                ans[0]++;
            else if('A' <= s[i] && s[i] <= 'Z')
                ans[1]++;
            else
                ans[2]++;
        } // 소문자, 대문자, 숫자, 공백의 개수
        cout << ans[0] << " " << ans[1] << " " << ans[2] << " " << ans[3] << '\n';
    }
    return 0;
}
