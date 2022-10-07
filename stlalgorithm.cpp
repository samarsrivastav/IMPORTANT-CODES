#include<bits/stdc++.h>
using namespace std;

// print the vector array
void vector_print(vector<int> ar){
    int p=ar.size();
    for(int j=0;j<p;j++){
        cout<<ar[j]<<" ";
    }
    cout<<"\n";
}

/* print the normal array */
void normal_print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements of array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nPrint by normal function\n";
    normal_print(arr,n);
    vector<int > vect(arr,arr+n);//(copy the the whole array in other vector array) int vec(arr,arr+n); is not true

    cout<<"\nInitial array is (by the vector function):\n";
    vector_print(vect);

    reverse(vect.begin(),vect.end());//revese of an array
    cout<<"\nReverse of the given array\n";
    vector_print(vect);
    
    cout<<"\nLargest element in the given array : ";
    cout<<*max_element(vect.begin(),vect.end());//maximum element in array
    cout<<endl;

    cout<<"\nSmallest element in the given array : ";
    cout<<*min_element(vect.begin(),vect.end());//minimun element in array
    cout<<endl;

    sort(vect.begin(),vect.end(),greater<int>());//sort the array in descending
    cout<<"\nSorted array in the descending order\n";
    vector_print(vect);

    sort(vect.begin(),vect.end());//sort the array in ascending order
    cout<<"\nSorted array in the ascending order\n";
    vector_print(vect);
 
    cout<<"\nOccurrences of 20 in the given array : ";
    cout << count(vect.begin(), vect.end(), 20);//Counts the occurrences of 20 from 1st to last element

    cout<<"\n\nFind number 5 using find function : ";
    find(vect.begin(), vect.end(),5) != vect.end() ? cout << "Element found":cout << "Element not found";
    // find() returns iterator to last address if element not present

    cout<<"\n\nFind number 4 using binary_search function : ";
    binary_search(vect.begin(),vect.end(), 4 ) ? cout<<"Found":cout<<"Not found";//array should sorted

    cout<<"\n\nDistance between first to max element : ";
    cout << distance(vect.begin(),max_element(vect.begin(), vect.end()));//Distance between first to max element

    cout<<"\n\nDistance between first to min element  : ";
    cout << distance(vect.begin(),min_element(vect.begin(), vect.end()));//Distance between first to min element
    return 0;
}