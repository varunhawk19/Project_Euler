     #include <bits/stdc++.h>
     using namespace std;
     int gcd (int a, int b)
     {
     if (b == 0) return a;
     int mod = a%b;
     return gcd (b, mod);
     }
     int lcm(long long int a,long long int b){
          return a*b/(gcd(a,b));
     }
     int main(){
          long long int answer=1;
          for (int i = 2; i<=20; i++) {
          answer=lcm(i,answer);
          }
          cout<<answer;
          return 0;
     }
