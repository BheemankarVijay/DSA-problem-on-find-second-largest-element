#include<iostream>
#include<vector>
using namespace std;

int getSecondLargest(vector<int> &arr) {
    // Code Here
    int largest=arr[0];
    int second=-1;
    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest){
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>second){
            second=arr[i];
        }
    }
    return second;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Second Largest: "<<getSecondLargest(arr)<<endl;
    return 0;
    // Time Complexity: O(n)
    
}