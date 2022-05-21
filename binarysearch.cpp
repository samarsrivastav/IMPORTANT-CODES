#include <iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
    // cin>>key;
   int start{0},end{size-1};
   int mid=start+(end-start)/2;

  while( start <= end)
   {
       if (arr[mid]==key)
       {
       return mid;
       }
       if (key>arr[mid]){
          start=mid+1;

       }
       else if (key<arr[mid]){
           end=mid-1;

       }
       mid=start+(end-start)/2;
   }
   return -1;


}
int main(){
   int box[5]={1,2,3,44,55};
   int k{};
   cin>>k;
   int found=binarysearch(box,5,k);
 cout<<found<<endl;
  




    return 0;
}