#include <iostream>
using namespace std;
 int main(){

 int n{},product{1};
 cin>>n;
 int number{0};
  for(int i{1};i<=n;i++){
    
     number++;
     product=number*product;
  }
 cout<<product;

return 0;
 }