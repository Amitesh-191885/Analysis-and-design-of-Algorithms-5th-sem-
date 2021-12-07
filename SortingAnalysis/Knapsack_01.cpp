#include <bits/stdc++.h>
using namespace std;

int knapSack(int maxW, int w[], int v[], int n) {
   // Dynamic approach...
   int i, wt;
   int K[n + 1][maxW + 1]; 
  
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

int main() {
   cout << "Number of items in Knapsack: ";
   int n, M;
   cin >> n;

   int v[n], w[n];
   for (int i = 0; i < n; i++) {
      cout << "Enter Value and Weight for: "<< i <<"th  item :";
      cin >> v[i];
      cin >> w[i];
    }

    cout << "Enter the Max capacity of knapsack : ";
    cin >> M;

    cout << "Total profit by dynamic approach for this 0/1 knapsack is : ";
    cout << knapSack(M, w, v, n);
    return 0;
 }