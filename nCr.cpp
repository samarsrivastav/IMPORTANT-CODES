#include<iostream>
using namespace std;
int factorial(int n){
    int num{1};
  while (n!=0)
  {
     num=num*n;
     n--;
  }
return num;
}
int nCp(int n, int p){
    int numerator=factorial(n);
    int den=factorial(n-p)*factorial(p);
    return numerator/den;
}
int main(){
    int n,r;
    cin>>n>>r;
    int ans=nCp(n,r);
   cout<<ans;
}