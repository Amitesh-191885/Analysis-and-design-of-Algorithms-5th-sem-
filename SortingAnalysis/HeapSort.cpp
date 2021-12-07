#include<bits/stdc++.h>
#include<time.h>

using namespace std;

int main(){
  //Main Function;
  int DatasetArr[] = {10,5,7,0,8,9,1,2}; 
  int Size = sizeof(DatasetArr)/sizeof(DatasetArr[0]);
  
  clock_t startTime = clock(); //For calculate time difference 

  //Calling Heap Sort function to sort the array.
  
  cout<<(double)(clock() - startTime)/CLOCKS_PER_SEC<<"\n\n";

  for(int i=0;i<Size;i++){
    cout<<DatasetArr[i]<<" "; //Print the data value...
  }

  return 0;
}