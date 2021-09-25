#include<bits/stdc++.h>
#include<time.h>
using namespace std;

void Merge(int dataset[],int startIndex,int middleIndex,int stopIndex); //Function for Merge 
void MergeSort(int data[],int lower, int upper); //Recursive function for merge Sort

int main(){
  //Main Function;
  int DatasetArr[] = {10,5,7,0,8,9,1,2}; 
  int Size = sizeof(DatasetArr)/sizeof(DatasetArr[0]);
  
  clock_t startTime = clock(); //For calculate time difference 

  MergeSort(DatasetArr,0,(Size-1)); //Calling MergeSort function for sort the array.
  
  cout<<(double)(clock() - startTime)/CLOCKS_PER_SEC<<"\n\n";

  for(int i=0;i<Size;i++){
    cout<<DatasetArr[i]<<" "; //Print the data value...
  }

  return 0;
}

//MergeSort Define...
void MergeSort(int data[],int lower,int upper){
  if(lower<upper){ //Base case means is thare any data element present in between the boundries or not.
    
    int middleIndex = (lower+upper)/2; //For Divide the array in two parts.
    
    MergeSort(data,lower,middleIndex); //Sort the first part.
    MergeSort(data,middleIndex+1,upper); //Sort the second part.

    Merge(data,lower,middleIndex,upper); //Merge the both in such way array become sorted.
  }
}

//Merge Define...
void Merge(int dataset[],int startIndex,int middleIndex,int stopIndex){
  int i,j,k; //Some pointers that need 
  int N1 = middleIndex - startIndex +1; //Size of first temp array
  int N2 = stopIndex - middleIndex; //Size of second temp array
  int LeftArr[N1],RightArr[N2];

// Copy Value of dataset Array in to two temporary array.
  for(i=0;i<N1;i++){
    LeftArr[i] = dataset[startIndex+i]; 
  }

  for(i=0;i<N2;i++){
    RightArr[i] = dataset[middleIndex+1+i];
  }

  i=0; //assign index value for first temp array
  j=0; // assign index value for second temp array.
  k = startIndex; // This index for sorted array.

  while (i<N1 && j<N2){ 
    /*Compare the values and take that value which is smaller and assign at k'th index of sorted array.
      And incriment the index values. 
    */
    if(LeftArr[i]<RightArr[j]){
      dataset[k] = LeftArr[i];
      i++;
      k++;
    }
    else{
      dataset[k] = RightArr[j];
      j++;
      k++;
    }
  }
  
  //If LeftArr index i not reach N1
  while (i<N1){
    dataset[k] = LeftArr[i];
    i++;
    k++;
  }

  //If RightArr index j not reach N2
  while (j<N2){
    dataset[k] = RightArr[j];
    j++;
    k++;
  }
}