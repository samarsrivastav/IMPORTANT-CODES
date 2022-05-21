#include<iostream>
using namespace std;

void sorting(int arr[],int size){
     

     for (int i = 0; i <= size-1; i++)
     {
              int minindex{i};

      for (int j = i+1; j <= size; j++)
      {
          
       if (arr[j]<arr[minindex])
       {
           swap(arr[j],arr[minindex]);
       }
       


      }
      
   }
     for (int i = 0; i < size; i++)
     {
        cout<< arr[i]<<" ";
     }
     
  
 
  
}
int main(){


  int box[5]={2,3,4,10,20};
  sorting(box,5);



    return 0;
}