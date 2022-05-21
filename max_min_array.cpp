#include<iostream>
using namespace std;
int minimun(int arr[],int n){
 int min=INT32_MAX;
 for (int i = 0; i < n; i++)
 {
 if (min>arr[i])
 {
     min=arr[i];
 }
 
  }
 
return min;
}
int maximum(int arr[],int size){
    int maxi=INT32_MIN;
 for (int i = 0; i <size; i++)
 {
    // maxi=max(maxi,INT16_MIN);
    if (arr[i]>maxi)
    {
        maxi=arr[i];
    }
    
 }
     return maxi;
}
int main(){
   int box[1000000];
  int size{};
  cin>>size;

   for (int i = 0; i < size; i++)
   {
       cin>>box[i];
   }
   

   cout<<maximum(box,size)<<endl;
   cout<<minimun(box,size)<<endl;


    return 0;
}