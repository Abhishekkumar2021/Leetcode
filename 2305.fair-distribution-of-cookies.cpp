/*
 * @lc app=leetcode id=2305 lang=cpp
 *
 * [2305] Fair Distribution of Cookies
 */

// @lc code=start
class Solution {
public:
    int under(vector<int> &arr,int size){
	    int cnt = 1;
	    int curr = 0;
	    for(int i=0; i<arr.size(); i++){
	    	if(arr[i]>size) return -1;
	    	curr+=arr[i];
	    	if(curr>size){
	    		cnt++;
	    		curr=arr[i];
	    	}
	    }
	    return cnt;
    }
    int distributeCookies(vector<int>& cookies, int k) {
        int low = 1; 
        int high = 0;
        for(int i=0; i<cookies.size(); i++){
            high+=cookies[i];
        }
        while (high>low)
        {
            int mid = (high+low)>>1;
            int u = under(cookies,mid);
            if(u>=k) low = mid;
            else high = mid;
        }
        return low;
        
    }
};
// @lc code=end

