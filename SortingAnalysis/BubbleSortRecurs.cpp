#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int data[],int Size){
  if(Size == 1){
    return;
  }
  else
    for(int index=0;index<Size-1;index++){
      if(data[index]>data[index + 1]){
        /* Here I'm swaping the value using bit manipulation using Ex-OR operation without using any extra space...
        */
        data[index] = data[index]^data[index + 1];
        data[index + 1] = data[index]^data[index + 1];
        data[index] = data[index]^data[index + 1];
      }
    }
    
    BubbleSort(data,Size-1);
}

int main(){
  int DatasetArr[] = {3,5,7,0,8,9,1,2};
  int size = sizeof(DatasetArr)/sizeof(DatasetArr[0]);
  
  BubbleSort(DatasetArr,size); // Calling function of BubbleSort...
  
  for(int i=0;i<size;i++){
    cout<<DatasetArr[i]<<" "; //Print the data value...
  }
  return 0;
}