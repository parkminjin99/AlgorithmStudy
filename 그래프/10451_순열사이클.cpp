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
            cin >> arr[j]; // ���� �׷������� �̷��� ǥ������ 
            visited[j] = 0;
        }
        for (int j = 1; j <= N; j++)
        {
            if(visited[j] == 0) // ���������� ������ �������Ҹ� ���� ��� ���� �ݵ�� ���� ���ҷ� ���ƿ´�
            {
                DFS(j);
                Ans++;
            }
        }
        cout << Ans << '\n';
    }
    
}