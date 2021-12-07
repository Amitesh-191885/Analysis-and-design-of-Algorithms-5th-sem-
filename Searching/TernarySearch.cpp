#include<bits/stdc++.h>
using namespace std;

// Recursive Function to perform Ternary Search 
// Initially,
// low = 0, starting index of array.
// high = N-1, ending index of array.
int TernarySearch(int arr[],int low,int high,int key) { 
    if (high>=low){  
        int mid1 = low + (high-low)/3; 
        int mid2 = high-(high -low)/3; 
        if (arr[mid1]==key){ 
            return mid1; 
        } 
        if (arr[mid2]==key){ 
            return mid2; 
        }  
        // check in which region it is present 
        // then repeat the Search operation 
        if (key<arr[mid1]){ 
            // The key lies in between l and mid1 
            return TernarySearch(arr,low,(mid1 - 1), key); 
        } 
        else if (key > arr[mid2]){ 
            // The key lies in between mid2 and r 
            return TernarySearch(arr,(mid2 + 1), high, key); 
        } 
        else{ 
            // The key lies in between mid1 and mid2 
            return TernarySearch(arr,(mid1 + 1), (mid2 - 1), key); 
        } 
    } 
  
    //key not present in array
    return -1; 
}

int main(){
  int data[] = {1,2,3,13,15,25,28,29,37};
  int size = sizeof(data)/sizeof(data[0]);
  int key = 2;
  cout<<key<<" found at "<<TernarySearch(data,0,(size-1),key) <<" index.\n";
  return 0;
}