#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    // int arr[5];  //Array Declaration

//Intialize array
    // Type-1:-
    // int arr[5]={1,2,3,4,5}; 

    //  // Type-2:-
    // int arr[]={1,2,3,4,5,6};

     // Type-3:-
    // int arr[6]={0};  =>  // o/p =>0 0 0 0 0 0 

    // Type-4:-
    // int arr[5]={1,2};  => o/p=>1 2 0 0 0 

    // Type-5:-
    // int arr[5]={1,2,3,4,5,6}; // error => too many initializers
    
    // // Type-6(Dynamic type);-
    // int arr[5];

    // Type-7(Dynamic type);-
    // int size;
    // cin>>size;
    // int arr[1000];


    // To take input from user in Array
    // for(int i=0;i<size;i++){
    //     cout<<"Enter the index of "<<i<<" ";
    //     cin>>arr[i];
    //     cout<<endl;
    // }
    // cout<<endl;
    // // To print array
    //     for(int i=0;i<size;i++){
    //         cout<<arr[i]<<" ";
    //     }

    // To access index value of array
    // int arr[5]={1,2,3,4,5};
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl;
    // cout<<arr[4]<<endl;
    
    // Size of Array

    // cout<<sizeof(arr)<<endl;  5*4byte=>20

    // To find Minimum Element in Array

    // int arr[5]={4,8,0,9,-2};
    // int ans=INT_MAX;

    // for(int i=0;i<5;i++){
    //     if(arr[i]<ans)
    //     ans=arr[i];
    // }
    // cout<<"Minimum Element in Array is: "<<ans;

    // To find the Maximum Element in Array

     int arr[5]={4,8,100,9,20};
    int ans=INT_MIN;

    for(int i=0;i<5;i++){
        if(arr[i]>ans)
        ans=arr[i];
    }
    cout<<"Maximum Element in Array is: "<<ans;




    return 0;
}