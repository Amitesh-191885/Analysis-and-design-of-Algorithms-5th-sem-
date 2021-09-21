#include<bits/stdc++.h>
#include<time.h>
using namespace std;

int main(){
  int N=9;
  int arr[N] = {2,3,6,8,4,1,5,7,0};

  //Bubble sort Begin
  clock_t startTime = clock(); //For calculate time difference store starting time

  for(int i=N-1;i>=0;i--){
    for(int j=0;j<=i-1;j++){ /* This loop for compare value from 0 to i-1, but it compare value upto
       last element and swap the values. */

      if(arr[j]>arr[j+1]){ 
        /* Swap the value so that arr is in sorted manner 
        Using ExOR operation, without using extra variable.
        */
        arr[j] = arr[j]^arr[j+1];
        arr[j+1] = arr[j]^arr[j+1];
        arr[j] = arr[j]^arr[j+1];
      }
    }
  }
  cout<<"\n"<<(double)(clock() - startTime)/CLOCKS_PER_SEC<<"\n\n";
  for(int i=0;i<N;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}