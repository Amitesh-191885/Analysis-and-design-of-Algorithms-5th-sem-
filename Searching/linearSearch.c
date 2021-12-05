#include<stdio.h>
#include<stdlib.h>

int linearsearch(int arr[],int k,int N){
  if(N>0){
    if(arr[N]==k){
      return N;
    }
    else{
      return linearsearch(arr,k,(N-1));
    }
  }
  else{
    return -1;
  }
}

int main(){
  int arr[] = {1,3,4,5,12,23,56,21};
  int size = sizeof(arr)/sizeof(arr[0]);
  int key = 12;
  printf("IF position is -1 means not found\n\n");
  printf("%d found at %d position.\n",key,linearsearch(arr,key,(size-1)));
  return 0;
}