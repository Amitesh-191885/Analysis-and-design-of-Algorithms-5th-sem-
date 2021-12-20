//Traveling Salesman Problem Dynamic Programming (Top-Down DP)

#include<bits/stdc++.h>
using namespace std;



int n =4;
int dp[16][4]; 
//Adj matrix represent a weigheted graph.

int dist[5][5] ={
  {0,20,42,25},
  {20,0,30,34},
  {42,30,0,10},
  {25,34,10,0}
};

// If visited all cities
int VISITED_ALL = (1<<n)-1;

//TSP function 
int TSP(int mask, int pos){
  if(mask == VISITED_ALL){
    return dist[pos][0];
  }

  //Look in store for visited or not
  if(dp[mask][pos]!=(-1)){
    return dp[mask][pos];
  }

  int ans = INT_MAX;
  for(int city=0;city<n;city++){
    if((mask&(1<<city))==0){
      int newAns = dist[pos][city] + TSP(mask|(1<<city),city); 
      ans = min(ans,newAns);
    }
  }
  return dp[mask][pos]=ans;
}

int main(){
  for(int i=0;i<(1<<n);i++){
    for(int j=0;j<n;j++){
      dp[i][j]=-1;
    }
  }
  cout<<"Min cost for visited all the city "<<TSP(1,0)<<endl;
  return 0;
}