#include<iostream>
using namespace std;
bool issorted(int *arr,int n){
  if(n==0||n==1){
      return true;
  }
  if(arr[1]<arr[0]){
      return false;
  }
  else{
      return issorted(arr+1,n-1);
  }



}
int main(){
    int arr[5]={1,2,3,5,6};
    int n=5;
    bool ss=issorted(arr,n);
    if(ss){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }


    return 0;
}