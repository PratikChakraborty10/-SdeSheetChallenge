#include<bits/stdc++.h>
using namespace std;
class gridUnique {
public:
    int uniquePaths(int m, int n) {
        int N = n + m - 2;
        int r = m - 1; 
        double res = 1;
        for (int i = 1; i <= r; i++)
            res = res * (N - r + i) / i;
            return (int)res;
    }
};
int main() {
    gridUnique obj;
    int totalCount= obj.uniquePaths(2,3);
    cout<<"The total number of Unique Paths are "<<totalCount<<endl;
}