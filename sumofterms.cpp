#include<iostream>
#include <cmath>
using namespace std;
int main(){
 int num1{0},num2{};
 cin>>num2;
 int count{};
 for (int i = 0; i <=num2; i++)
 {
    
    count+= pow(i,i+1);
 }
 cout<<count;
 






    return 0;
}