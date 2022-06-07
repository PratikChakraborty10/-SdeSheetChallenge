#include<bits/stdc++.h>
using namespace std;
// Brute
// Time = O(nlogn + n)
// Space = O(1)
int findDuplicate_Brute(vector<int> arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for(int i=0;i<n;i++) {
        if(arr[i] == arr[i+1]) {
            return arr[i];
        }
    }
} 
// Better
// Time = O(n)
// Space = O(n)
int findDuplicate_Better(vector<int> arr) {
    int n = arr.size();
    int freq[n+1] = {
        0
    };
    for(int i=0;i<n;i++) {
        if(freq[arr[i]] == 0) {
            freq[arr[i]] = freq[arr[i]] + 1;
        } else {
            return arr[i];
        }
    }
    return 0;
}
// Optimised
// Time = O(n)
// Space = O(1)
int findDuplicate_Optimised(vector<int> arr) {
    int slow = arr[0];
    int fast = arr[0];
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while(slow != fast);
        fast = arr[0];
    while(slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}
int main() {
    vector<int> arr = {1,3,4,2,3,3,8,7};
    int ans_brute = findDuplicate_Brute(arr);
    int ans_better = findDuplicate_Better(arr);
    int ans_optimised = findDuplicate_Optimised(arr);
    cout << ans_brute << endl;
    cout << ans_better << endl;
    cout << ans_optimised << endl;
}