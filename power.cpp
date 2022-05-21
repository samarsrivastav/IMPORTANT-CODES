#include<iostream>
using namespace std;
int power(int a,int b){
 int num{1};
 for (int i = 1; i <=b; i++)
 {
   
    num=num*a;

 }
 


return num;
}
int main(){
    int c,d;
     cin>>c>>d;
    int n=power(c,d);
 cout<<n;
    return 0;
}