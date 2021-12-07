#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int low,int high,int key){
    while (low<=high){
      /* code */
      int mid = (low+(high+1))/2;
      if(arr[mid]==key){
        return mid;
      }
      else if(arr[mid]>key){
        high = mid-1;
      }
      else{
        low = mid+1;
      }
    }
    
  return -1;   
}

int main(){
  int data[] = {1,2,3,13,15,25,28,29,37};
  int size = sizeof(data)/sizeof(data[0]);
  int key = 89;
  cout<<key<<" found at "<<BinarySearch(data,0,(size-1),key) <<" index.\n";
  return 0;
}