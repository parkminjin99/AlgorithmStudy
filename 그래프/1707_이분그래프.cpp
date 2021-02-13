#include<iostream>
#include<queue>
using namespace std;

#define MAX_N 1001
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
bool map[MAX_N][MAX_N], visited[MAX_N];
int N;

int main()
{
    int test_case, V, E, x, y;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        cin >> V >> E;
        for (int j = 0; j < E; j++)
        {
            cin >> x >> y;
            map[x][y] = map[y][x] = 1;
        }
        
        
    }
    
}