#include<stdio.h>

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
        //swap(arr[i], arr[largest]);
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
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
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
int main(){
  //Main Function;
  int DatasetArr[] = {10,5,7,0,8,9,1,2}; 
  int Size = sizeof(DatasetArr)/sizeof(DatasetArr[0]);
  printf("Before heap sort:\n");

  for(int i=0;i<Size;i++){
    printf("%d ",DatasetArr[i]); //Print the data value...
  }
  //Calling Heap Sort function to sort the array.
  heapSort(DatasetArr,Size);
  printf("\n After heap sort:\n");
  for(int i=0;i<Size;i++){
    printf("%d ",DatasetArr[i]); //Print the data value...
  }
  return 0;
}