#include <bits/stdc++.h>
using namespace std;
long long c[100];
bool isPrime(long long int n){
     if(n==1){
          return false;
     }
     if(n==2){
          return true;
     }
     int counter=3;
     while((counter*counter)<=n){
          if(n%counter==0){
               return false;
          } else{
               counter+=2;
          }
     }
     return true;
}
int main(){
     int counter=1;
     std::vector<long long int> v;
     long long int i=3;
     while(counter<10000){
          if(isPrime(i)){
               v.push_back(i);
               cout<<i<<endl;
               counter++;
          }
          i+=2;
     }
     cout<<v.back();
     return 0;
}
