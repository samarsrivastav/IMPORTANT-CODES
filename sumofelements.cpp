#include <iostream>
using namespace std;

int sum_arr(int arr[],int n){
 int count{0};
    for (int i = 0; i < n; i++)
    {
        count=count+arr[i];
    }
    return count;
}
int main(){

 int box[100000];
 int size;
 cin>>size;
 for (int i = 0; i < size; i++)
 {
   cin>>box[i];
 }
 cout<<sum_arr(box,size);
 




}