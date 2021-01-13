 #include<iostream>
 using namespace std;
 int fibo[21];

 int fibo_func(int N)
 {
     if(fibo[N] != -1)   return fibo[N];
     else                return fibo_func(N-1) + fibo_func(N-2);
 }

 int main()
 {
     int N;
     fibo[0] = 0; fibo[1] = 1;
     for(int i = 2; i < 21; i++) fibo[i] = -1;

     cin >> N;
     cout << fibo_func(N) << endl;
     return 0;
 }
