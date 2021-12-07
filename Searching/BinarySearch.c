#include<stdio.h>
int BinarySearch(int arr[],int low,int high,int key){
  if(low<=high){
    int mid = (low+(high+1))/2;
    if(arr[mid]==key){
      return mid;
    }
    else if(arr[mid]>key){
      return BinarySearch(arr,low,(mid-1),key);
    }
    else{
      return BinarySearch(arr,(mid+1),high,key);
    }
  }
  else{
    return -1;
  }
}

int main(){
  int data[] = {1,2,3,13,15,25,28,29,37};
  int size = sizeof(data)/sizeof(data[0]);
  int key = 13;
  printf("%d found at %d index",key,BinarySearch(data,0,(size-1),key));
  return 0;
}