 #include <iostream>
 #include <algorithm>
 using namespace std;

 #define MAX_N 1000
 int main()
 {
     int N;
     int arr[MAX_N];
     cin >> N;
     for(int i = 0; i < N; i++)
         cin >> arr[i];
     sort(arr,arr+N);
     for(int i = 0; i < N; i++)
         cout << arr[i] << endl;
     return 0;
 }
