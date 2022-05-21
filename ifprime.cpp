#include<iostream>
using namespace std;
int main(){
    
    int n{},a{};
    cin>>n;
    if (n>=2)
    {
       for (int i = 1; i <n; i++)
     {
        i++;
        if (n%i==0)
        {
            // cout<<"no"<<endl;
             a=1;
        }
        
        else{
        //  cout<<"yes"<<endl;
         a=0;
          }
     }
     if (a==0)
     {
          cout<<"yes"<<endl;
     }
     else if (a==1)
     {
         cout<<"no"<<endl;
     }
     
     
    }
    else {
    cout<<"yes"<<endl;
    }
    
    

    return 0;
}