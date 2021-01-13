#include <iostream>
#include <algorithm>

using namespace std;
#define MAX_N 500000
#define MAX_ELEMENT 4001
int main()
{
    int N, sum = 0;
    int arr[MAX_N];
    int check[MAX_ELEMENT] = {0,};
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        check[arr[i]]++;
    }
    sort(arr,arr+N);
    
    cout << arr[i/2] << endl;
    cout << 
    cout << arr[N-1]-arr[0] << endl;
    
    return 0;
}