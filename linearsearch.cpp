#include <iostream>
using namespace std;

bool search(int arr[],int size, int key){

for (int i = 0; i < size; i++)
{
    if (arr[i]==key)
    {
    return 1;
        }

}
    return 0;

}

int main(){

int box[1000000]; 
int key,size;
cin>>size>>key;
for (int i = 0; i < size; i++)
{
    cin>>box[i];
    
}


bool found=search(box,size,key);
    if(found){
        cout<<"present"<<endl;
    }

 else 
   cout<<"no"<<endl;




return 0;
}  
