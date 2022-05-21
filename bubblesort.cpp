#include <iostream>
using namespace std;

void bubblesorting(int arr[], int size){
    
    for (int i = 0; i < size; i++)
    {
       bool swapped=false;
      for (int j = 0; j< size-i ;j++)
      {
          if (arr[j]>arr[j+1])
          {
             swap(arr[j+1],arr[j]);
             swapped=true;
          }
          
      }
      
        if (swapped=true){
           break;
        }


        

    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    
    int box[4]={0,4,5,7};
    bubblesorting(box,4);





    return 0;
}

