#include <iostream>
using namespace std;
int fib(int n){
    int a=0,b=1,ans=a;
    
 if(n==1){
     return a;
 }
 else if (n==2)
 {
     return b;
 }
 //------recursion-----
// return fib(n-1)+fib(n-2);

//--------loop--------
for(int i=3;i<=n;i++){
    ans=a+b;
    a=b;
    b=ans;
}
 return ans;
}
int main(){

  cout<<fib(4)<<endl;

    return 0;
}