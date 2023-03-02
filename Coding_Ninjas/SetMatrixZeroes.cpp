//Given an n x m integer matrix, if an element is 0,
// set its entire row and column as 0s.

#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n = matrix.size(), m = matrix[0].size();
	vector <int> rows(n, 0), columns(m, 0);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(matrix[i][j] == 0){
				rows[i] = 1;
				columns[j] = 1;
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(rows[i] == 1 || columns[j] == 1) matrix[i][j] = 0;
		}
	}
}
