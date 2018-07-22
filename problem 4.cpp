#include <bits/stdc++.h>
using namespace std;
vector <int> pallindromes;
void check_pallindrome(int n){
     string s=to_string(n);
     if(s==string(s.rbegin(),s.rend())){
          pallindromes.push_back(n);
     }
}
void genarate_numbers(){
     for (size_t i = 1000; i > 100; i--) {
          for (size_t j = 1000; j > 100; j--) {
               check_pallindrome(i*j);
          }
     }
}
int main(){
     genarate_numbers();
     sort(pallindromes.begin(),pallindromes.end());
     cout<<pallindromes.back();
     return 0;
}
