class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> rows(matrix.size()), cols(matrix[0].size());
for( int i = 0; i < matrix.size(); i++){                 
     for(int j = 0; j< matrix[0].size(); j++){
	      if(matrix[i][j] == 0){
		      rows[i] = cols[j] = 1;       //updating hash tables
			 }
	   }
}
//Now updating the matrix in 2nd traversal
for( int i = 0; i < matrix.size(); i++){                 
     for(int j = 0; j< matrix[0].size(); j++){
	      if(rows[i] == 1 || cols[j] == 1){
		      matrix[i][j] = 0;       
			 }
	   }
}
    }
};