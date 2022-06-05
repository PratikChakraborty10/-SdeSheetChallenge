#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &arr) {
    int maxPro = 0;
    for(int i=0;i<arr.size();i++) {
        for(int j=i+1;j<arr.size();j++) {
            if(arr[j] > arr[i]) {
                maxPro = max(arr[j]-arr[i], maxPro);
            }
        }
    }
    return maxPro;
}
int main() {
    vector<int> arr = {7,1,5,3,6,4};
    int maxPro = maxProfit(arr);
    cout << maxPro << endl;
}