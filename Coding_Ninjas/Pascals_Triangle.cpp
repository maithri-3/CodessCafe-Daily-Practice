//return a 2-D Array containing the Pascal's triangle
// with n rows

#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector <vector <long long int>> pascalTriangle;
  vector <long long int> row1(1, 1);
  pascalTriangle.push_back(row1);
  for(int i = 1; i < n; i++){
    vector <long long int> row;
    row.push_back(1);
    if(i >= 2){
      for(int j = 1; j < i; j++){
        row.push_back(pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j]);
      }
    }
    row.push_back(1);
    pascalTriangle.push_back(row);
  }
  return pascalTriangle;
}
