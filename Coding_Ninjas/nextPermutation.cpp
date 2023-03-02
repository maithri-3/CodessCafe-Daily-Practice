//find the next lexographically big permutation of n numbers

#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    if(n == 1) return permutation;
    int i = n - 2, j = n - 1;
    while(i >= 0 && permutation[i] >= permutation[i + 1])
        i--;
    if (i >= 0) {
      while (j >= 0 && permutation[j] <= permutation[i])
        j--;
      if (j >= 0)
        swap(permutation[i], permutation[j]);
    }
    reverse(permutation.begin() + i + 1, permutation.end());
    return permutation;
}
