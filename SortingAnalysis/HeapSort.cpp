#include<bits/stdc++.h>
#include<time.h>
using namespace std;

// To heapify a subtree rooted with node i which is an index in arr[]. 
// n is size of heap
void heapify(int arr[], int n, int i){
    int largest = i; // Initialize largest as root
    int leftch = 2*i + 1; // left = 2*i + 1
    int rightch = 2*i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (leftch < n && arr[leftch] > arr[largest]){
      largest = leftch;
    }

    // If right child is larger than largest so far
    if (rightch < n && arr[rightch] > arr[largest]){
      largest = rightch;
    }

    // If largest is not root
    if (largest != i){
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int N){
    // Build heap (rearrange array)
    for (int i = N / 2 - 1; i >= 0; i--){
       heapify(arr, N, i);
    }
    // One by one extract an element from heap
    for (int i=N-1; i>=0; i--){
        // Move current root to end
        swap(arr[0], arr[i]);
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}


int main(){
  //Main Function;
  int DatasetArr[] = {10,5,7,0,8,9,1,2}; 
  int Size = sizeof(DatasetArr)/sizeof(DatasetArr[0]);
  
  clock_t startTime = clock(); //For calculate time difference 

  //Calling Heap Sort function to sort the array.
  heapSort(DatasetArr,Size);

  cout<<(double)(clock() - startTime)/CLOCKS_PER_SEC<<"\n\n";

  for(int i=0;i<Size;i++){
    cout<<DatasetArr[i]<<" "; //Print the data value...
  }

  return 0;
}