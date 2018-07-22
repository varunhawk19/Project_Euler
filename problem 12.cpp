#include <bits/stdc++.h>
using namespace std;
int number_of_divisors(int a){
     int nod=0;
     int sqr=(int)sqrt(a);
     for(int i=1;i<=sqr;i++){
          if(a%i==0){
               nod+=2;
          }
     }

     if(sqr*sqr==a){
          nod--;
     }
     return nod;
}
int main(){
     int number = 0;
     int i = 1;

     while(number_of_divisors(number) < 500){
         number += i;
         i++;
     }
     cout<<number;
     return 0;
}
