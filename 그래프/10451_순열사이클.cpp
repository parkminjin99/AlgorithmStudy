#include<iostream>
#include<queue>
using namespace std;

#define MAX_N 1001
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
bool visited[MAX_N];
int arr[MAX_N], N;

void DFS(int start)
{
    visited[start] = 1;
    if(visited[arr[start]] == 0)
        DFS(arr[start]);
}

int main() 
{
    FIO;
    int test_case, y;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        int Ans = 0;
        cin >> N;
        for (int j = 1; j <= N; j++)
        {
            cin >> arr[j]; // 순열 그래프여서 이렇게 표현가능 
            visited[j] = 0;
        }
        for (int j = 1; j <= N; j++)
        {
            if(visited[j] == 0) // 순열에서는 순열의 다음원소를 따라 계속 돌면 반드시 원래 원소로 돌아온다
            {
                DFS(j);
                Ans++;
            }
        }
        cout << Ans << '\n';
    }
    
}