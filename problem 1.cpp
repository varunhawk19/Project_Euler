#include <bits/stdc++.h>
using namespace std;
int main(){
    long int sum=0;
    for(int i=1;i<1000;i++){
        if(i%3==0){
            sum+=i;
            continue;
        }
        else if(i%5==0){
            sum+=i;
            continue;
        }
    }
    cout<<sum;
     return 0;
}
