#include <bits/stdc++.h>
using namespace std;
/*long long int string_to_integer_convert(string m){
     long long int large=0;
     for(int i=0;i<13;i++){
          large+=pow(10,12-i)*((int)m.at(i));
     }
     return large;
}
int main(){
     string s,m;
     long long int temp;
     std::vector<long long int> v;
     cin>>s;
     for(int i=0;i<987;i++){
          m.assign(s,i,13);
          v.push_back(string_to_integer_convert(m));
          m.clear();
     }
     sort(v.begin(),v.end());
     std::cout << v.back() << '\n';
     return 0;
}*/
 int main(int argc, char const *argv[]) {
string p = " 7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";

long long int max = 1,        // the maximum product
    prod = 1,       // the current product
    len = 1000,  // the length of the number (1000 for this problem)
    zeros = 0;      // number of zeros in the current product

// loop through each digit of the number
for (int i = 0; i < len; i++)
{
    // if there are 5 digits in our current product,
    // we need to remove the oldest one to make room
    // for the new digit
    if (i + 1 > 13)
    {
        if (p[i - 13] == '0')
        {
            // if the old digit was a zero,
            // we remove one zero from the current product
            zeros--;
        }
        else
        {
            // if the old digit was not a zero,
            // we divide it from the current product
            prod = prod / (p[i - 13] - '0');
        }
    }

    // now we add the new digit to the current product
    if (p[i] == '0')
    {
        // if the current digit is a zero,
        // we add one zero to the current product
        zeros++;
    }
    else
    {
        // if the current digit is not a zero,
        // we multiply our current product by the current digit
        prod = prod * (p[i] - '0');
    }

    // if we have 5 digits in the current product
    // and none of them are zero
    if (i + 1 >= 13 && zeros == 0 && prod > max)
    {
        // then if the current product is larger than
        // the largest product, we update the
        // largest product
        max = prod;
    }

}
cout<<max;
return 0;
}
