// Sort an array containing only 0s, 1s and 2s.

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int zc = 0, oc = 0, tc = 0;
   for(int i = 0; i < n; i++){
      if(arr[i] == 0) zc++;
      else if(arr[i] == 1) oc++;
      else if(arr[i] == 2) tc++;
   }
   for(int i = 0; i < zc; i++){
      arr[i] = 0;
   }
   for(int i = zc; i < zc + oc; i++){
      arr[i] = 1;
   }
   for(int i = zc + oc; i < zc + oc + tc; i++){
      arr[i] = 2;
   }
}
