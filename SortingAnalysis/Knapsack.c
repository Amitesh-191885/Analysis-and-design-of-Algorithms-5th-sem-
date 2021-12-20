#include<stdio.h>

int max(int a,int b){
  return (a>b)?a:b;
}

int knapSack(int maxW, int w[], int v[], int n) {
   // Dynamic approach...
   int i, wt;
   int K[100][100]; 
  
   for (i = 0; i <= n; i++) {
      for (wt = 0; wt <= maxW; wt++) {
         if (i == 0 || wt == 0){
           K[i][wt] = 0;
         } 
         else if (w[i - 1] <= wt){
           K[i][wt] = max(v[i - 1] + K[i - 1][wt - w[i - 1]], K[i - 1][wt]);
         }
         else{
            K[i][wt] = K[i - 1][wt];
         }  
      }
   }
   return K[n][maxW];
}

int main(){
  printf("Number of items in Knapsack is: ");
   int n=0, M;
   scanf("%d",&n);

   int v[100];
   int w[100];
   for (int i = 0; i < n; i++) {
      printf("Enter profit and Weight for: %dth item",i);
      scanf("%d",&v[i]);
      scanf("%d",&w[i]);
    }
    scanf("Enter the Maximum capacity of knapsack : %d",&M);

    printf("Total Maximum profit by dynamic approach for this 0/1 knapsack is : %d",knapSack(M, w, v, n));
    return 0;
}