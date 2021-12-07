#include<bits/stdc++.h>
using namespace std;
int TernarySearch(int arr[],int low,int high,int key){
  if(high>=low){
    int mid1 = (low + (high-low))/3;
    int mid2 = (high-(high-low))/3;
    if(arr[mid1]==key){
      return mid1;
    }
    if(arr[mid2]==key){
      return mid2;
    }
    
  }
  else{
    //key not present in array
    return -1;
  }
}

int main(){
  int data[] = {1,2,3,13,15,25,28,29,37};
  int size = sizeof(data)/sizeof(data[0]);
  int key = 89;
  cout<<key<<" found at "<<TernarySearch(data,0,(size-1),key) <<" index.\n";
  return 0;
}