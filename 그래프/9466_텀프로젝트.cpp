#include<iostream>
using namespace std;
#define MAX_N 100001
int N, first, arr[MAX_N];
bool visited[MAX_N];

void DFS_findcycle(int start)
{
    visited[start] = 1;
    if(arr[start] == first)
        return;
    if(visited[arr[start]] == 0)
        DFS_findcycle(arr[start]);
}


int main()
{
    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        int Ans = 0;
        cin >> N;
        for (int j = 1; j <= N; j++)
        {
            cin >> arr[j];
            visited[j] = 0;
            if(arr[j] == j)
                visited[j] = 1;
        }
        for (int j = 1; j <= N; j++)
        {
            if(visited[j] == 0)
            {
                first = j;
                DFS_findcycle(j);
            }
        }
        for (int j = 1; j <= N; j++)
        {
            if(visited[j] == 0)
                Ans++;
        }
        cout << Ans << '\n';
    }
    
}