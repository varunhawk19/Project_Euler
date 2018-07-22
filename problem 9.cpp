#include <bits/stdc++.h>
using namespace std;
bool check(int i,int j,int k){
     if(j+i+k!=1000){
          return false;
     }
     if(pow(j,2)+pow(i,2)==pow(k,2)){
          return true;
     }
     return false;
}
int main(){
     for(int i=0;i<1000;i++){
          for(int j=0;j<1000;j++){
               for(int k=0;k<1000;k++){
                    if(check(i,j,k)){
                         std::cout << i<<" "<<j<<" "<<k << '\n';
                    }
               }
          }
     }
     return 0;
}
