#include<bits/stdc++.h>
using namespace std;
// Brute
// Time : O(n^2)
// Space : O(1)

vector<int> twoSum_Brute(vector<int>& nums, int target) {
    vector<int> res;
    for (int i = 0; i < nums.size(); ++i) {
   	 for (int j = i + 1; j < nums.size(); ++j) {
   		 if (nums[i] + nums[j] == target) {
   			 res.emplace_back(i);
   			 res.emplace_back(j);
   			 break;
   		 }
   	 }
   	 if (res.size() == 2)
   		 break;
    }
    return res;
} 

// Better
// Time : O(nlogn)
// Space : O(n)

vector<int> twoSum_Better(vector<int>& nums, int target) {
    vector<int> res,store;
    store = nums;
	sort(store.begin(), store.end());
    int left=0,right=nums.size()-1;
    int n1,n2;
    while(left<right) {
        if(store[left]+store[right]==target){
            n1 = store[left];
            n2 = store[right];
            break;
        } else if(store[left]+store[right]>target)
            	    right--;
        	else
            	    left++;
    	}
    	for(int i=0;i<nums.size();++i){
        	if(nums[i]==n1)
            	res.emplace_back(i);
        	else if(nums[i]==n2)
            	res.emplace_back(i);
    	}
    return res;
}

// Optimised
// Time : O(n)
// Space : O(n)

vector<int> twoSum_Optimised(vector<int>& nums, int target) {
    vector<int> res;
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); ++i) {
   	    if (mp.find(target - nums[i]) != mp.end()) {
   		    res.emplace_back(i);
   		    res.emplace_back(mp[target - nums[i]]);
   		return res;
   	}
   	mp[nums[i]] = i;
    }
    return res;
}
int main() {
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> ans;
    twoSum_Optimised(nums, target);
    for(int i=0;i<ans.size();i++) {
        ans.push_back(i);
        //cout << ans[i] << " ";
    }
    for(int i=0;i<ans.size();i++) {
        //ans.push_back(i);
        cout << ans[i] << " ";
    }
    cout << endl;
}