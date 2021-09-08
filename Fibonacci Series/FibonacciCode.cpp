#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
  int N=93; // N must be greater than 0;
  long long int term1 = 0, term2 = 1;
  try{
    //cin>>N;
    if(N<=0){
      throw runtime_error("N must be greater than '0'. \n");
      exit;
    }
    cout<<term1<<"\n"<<term2<<"\n";
    for(int i=2;i<N;++i){
      long long int term3= term1+term2;
      cout<<term3<<"\n";
      term1= term2;
      term2= term3;
    }
  }
  catch (exception& e) {
    cerr << e.what() << endl;
  }
  return 0;
}