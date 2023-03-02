//find the sum of subarray (including empty subarray)
// having maximum sum of all subarrays

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long maxi = 0; 
    long long tot = 0;
    for(long long i = 0; i < n; i++){
        tot += arr[i];
        maxi = max(tot, maxi);
        if(tot < 0) tot = 0;
    }
    return maxi;
}
