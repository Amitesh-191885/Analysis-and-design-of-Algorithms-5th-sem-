#include<bits/stdc++.h>
#include<time.h>

using namespace std;
int smallestelemets(int arr[],int k,int SizE);
void SelectionSort(int arr[],int size);

int main(){
  //Main Function;
  int DatasetArr[] = {1,3,7,5,2,6,9,8}; 
  int Size = sizeof(DatasetArr)/sizeof(DatasetArr[0]);
  
  clock_t startTime = clock(); //For calculate time difference 
 SelectionSort(DatasetArr,Size);//Calling Selection Sort function to sort the array.
  
  cout<<(double)(clock() - startTime)/CLOCKS_PER_SEC<<"\n\n";

  for(int i=0;i<Size;i++){
    cout<<DatasetArr[i]<<" "; //Print the data value...
  }

  return 0;
}

void SelectionSort(int arr[],int SizE){
  int pos,temp,k,small;
  for(k=SizE-1;k>=0;k--){
  //for(k=0;k<SizE;k++){
    //pos = smallestelemets(arr,k,SizE);
    small = arr[k];
    pos = k;
    for(int i = k-1;i>=0;i--){
    //for(int i=k+1;i<SizE;i++){
      if(small>arr[i]){
        pos = i;
        small = arr[i];
      }
    }
    temp = arr[k];
    arr[k]= arr[pos];
    arr[pos] = temp;
  }
}

