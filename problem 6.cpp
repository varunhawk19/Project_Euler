#include <bits/stdc++.h>
using namespace std;
long int square(int x){
     return pow(x,2);
}
long int sum(int n){
     return n*(n+1)/2;
}
long int sum_square(int n){
     return n*(n+1)*(2*n+1)/6;
}
int main(){
     cout<<square(sum(100))-sum_square(100);
     return 0;
}
