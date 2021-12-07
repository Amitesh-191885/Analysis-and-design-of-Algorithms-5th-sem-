#include<bits/stdc++.h>
#include<time.h>

using namespace std;

void swap(int *a,int* b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int arr[],int low,int high){
  int piv = arr[high];    // pivot as a last element.
    int i = (low - 1); 

    for (int j = low; j <= high- 1; j++){
        if (arr[j] <= piv)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void QuickSort(int arr[],int low,int high){
  if(low<=high){
    int p = partition(arr,low,high);

    QuickSort(arr,low,(p-1));
    QuickSort(arr,(p+1),high);
  }
  else{
    return;
  }
}

int main(){
  //Main Function;
  int DatasetArr[] = {10,5,7,0,8,9,1,2}; 
  int Size = sizeof(DatasetArr)/sizeof(DatasetArr[0]);
  
  clock_t startTime = clock(); //For calculate time difference 

  //Calling Quick Sort function to sort the array.
  QuickSort(DatasetArr,0,(Size-1));
  
  cout<<(double)(clock() - startTime)/CLOCKS_PER_SEC<<"\n\n";

  for(int i=0;i<Size;i++){
    cout<<DatasetArr[i]<<" "; //Print the data value...
  }

  return 0;
}