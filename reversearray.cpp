#include <iostream>
using namespace std;

void reverse(int arr[],int size){

int n=size;
for (int i = 0,j=size-1; i < j; i++,j--)
{
  swap(arr[i],arr[j]);
}
for (int i = 0; i < size; i++)
{
  cout<<arr[i]<<" ";

}




}
int main(){

int box[5]={1,2,5,23,10};

reverse(box,5);







}