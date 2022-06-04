#include<bits/stdc++.h>
using namespace std;
void setMatrixZeros(vector<vector<int>> &matrix) {
    int rows = matrix.size(); 
    int cols = matrix[0].size();
    vector<int>dummyRow(rows,-1); 
    vector<int>dummyCol(cols,-1);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                dummyRow[i] = 0;
                dummyCol[j] = 0;
            }
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (dummyRow[i] == 0 || dummyCol[j]==0) {
                matrix[i][j] = 0;
            }
        }
    }
}
int main() {
    vector<vector<int>> matrix;
    matrix = {{1,1,1,1}, {1,0,1,1}, {1,1,0,0}, {0,0,0,1}};
    setMatrixZeros(matrix);
    for(int i=0;i<matrix.size();i++) {
        for(int j=0;j<matrix[0].size();j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}