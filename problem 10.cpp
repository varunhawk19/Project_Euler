#include <bits/stdc++.h>
using namespace std;
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
          long long int sum=0;
          for(long long int i=0;i<2000000;i++){
               if(isPrime(i)){
                    cout<<i<<endl;
                    sum+=i;
               }
          }
          cout<<sum;
          return 0;
     }
