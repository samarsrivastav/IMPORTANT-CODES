#include <iostream>
using namespace std;
bool search(int *arr,int s,int e,int x){
    int mid=s+(e-s)/2;
    if(s>e){
        return false;
    }
    
     if (arr[mid]==x)
        {
           return true;
        }
      if (arr[mid]>x)
       {
        return search(arr,s,mid-1,x);
       }
     else{
        return search(arr,mid+1,e,x);
        }
}
  
int main(){
 int arr[5]={1,2,4,5,45};
 int n=5,x=405;
 bool found=search(arr,0,n-1,x);
 if(found){
     cout<<"yes"<<endl;
 }
else{
    cout<<"no"<<endl;
}
return 0;
}