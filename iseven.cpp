#include<iostream>
using namespace std;

bool iseven(int n){
  if(n&1){
    return 0;
    
  }
 else{
      return 1;
  
   }

  
}
int main(){
 int num;
 cin>>num;
 
 if(iseven(num)){
      cout<<"even";
 }
 else{
      cout<<"odd";
 }


}