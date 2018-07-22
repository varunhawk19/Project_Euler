#include <bits/stdc++.h>
using namespace std;
long int fib[4000000];

int main(){
     fib[0]=1;
     fib[1]=1;
     long int sum=0;
     for (size_t i = 2; i <= 100; i++) {
     fib[i]=fib[i-1]+fib[i-2];
     if(fib[i]>4000000){
          break;
     }
     if(fib[i]%2==0){
          cout<<fib[i]<<endl;
          sum+=fib[i];
     }
     }
     std::cout << sum << '\n';
     return 0;
}
