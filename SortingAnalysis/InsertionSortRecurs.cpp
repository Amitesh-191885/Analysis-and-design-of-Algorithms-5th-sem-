#include<bits/stdc++.h>
#include<time.h>
using namespace std;

void InsertionSort(int data[],int SizeofArr){
  //Recursive Insertion Sort
  if(SizeofArr<=1){ //Base case of recursive function...
    return;
  }
  else{
    InsertionSort(data,SizeofArr-1); //Recursive call function and then do some changes... Like sort first SizeofArr-1 value of dataset...
    int tempdata = data[SizeofArr-1];
    int i = SizeofArr-2;
    while (i>=0 && data[i]>tempdata){
      data[i+1] = data[i];
      i--;
    }
    data[i+1]=tempdata;
  }
}

int main(){
  int DataArr[] = {10,5,7,0,8,9,1,2};
  int siZe = sizeof(DataArr)/sizeof(DataArr[0]);
  
  clock_t startTime = clock(); //For calculate time difference 

  InsertionSort(DataArr,siZe);

  cout<<"\n"<<(double)(clock() - startTime)/CLOCKS_PER_SEC<<"\n\n";
  for(int i=0;i<siZe;i++){
    cout<<DataArr[i]<<" ";
  }
  return 0;
}