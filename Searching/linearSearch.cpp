#include<bits/stdc++.h>
using namespace std;

void linearSearch(int arr[],int N, int key){
  bool fal;
  for(int i=0;i<N;i++){
    if(arr[i]==key){
      cout<<key<<" is present at index "<< i<<"\n";
      fal =0;
    }
  }
  if(fal!=0){
    cout<<"Not found\n";
  }
}

int main(){
  int data[] = {10,1,3,15,25,13,37,28,29};
  int size = sizeof(data)/sizeof(data[0]);
  int key;
  cin>>key;
  linearSearch(data,size,key);
  return 0;
}