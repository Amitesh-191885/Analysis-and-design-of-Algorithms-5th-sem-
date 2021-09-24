#include<bits/stdc++.h>
#include<time.h>
using namespace std;

//Insertion sort Iterative...

int main(){
  int DatasetArr[] = {10,5,7,0,8,9,1,2};
  int Tempstore,PrevIndex,size = sizeof(DatasetArr)/sizeof(DatasetArr[0]);

  clock_t startTime = clock(); //For calculate time difference 
  
  for(int i=1;i<size;i++){ // This loop is outer loop for take a data and store it in tempstore variable.. 
    
    Tempstore = DatasetArr[i]; //Store array value of 'i' index 
    PrevIndex = i-1; //assign index value
    
    /* This while loop used for inserting the Tempstore value at it's correct position such that array become sorted..
    */
    while (PrevIndex>=0 && DatasetArr[PrevIndex]>Tempstore){
      DatasetArr[PrevIndex+1] = DatasetArr[PrevIndex];  
      --PrevIndex;
    }
    DatasetArr[PrevIndex +1]= Tempstore;  
  }
  
  cout<<"\n"<<(double)(clock() - startTime)/CLOCKS_PER_SEC<<"\n\n";
  
  for(int i=0;i<size;i++){
    cout<<DatasetArr[i]<<" "; //Print the data value...
  }
  return 0;
}