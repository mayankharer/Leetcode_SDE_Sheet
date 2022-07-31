// Use Heap we will use min Heap

// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         sort(nums.begin(),nums.end());
//         return nums[nums.size()-k];
//     }
// };

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // min heap intialization
        priority_queue<int,vector<int>,greater<int>> pq;
        
        //we push first k elements in the min-heap
        for(int i=0;i<k;i++) pq.push(nums[i]);
        
        //Now if the element at top of min heap is smaller ,we remove it and add newelement
        for(int i=k;i<nums.size();i++){
            if(pq.top()<nums[i]){
            //pop that element and add new greater element and maintain size k
                pq.pop();
                pq.push(nums[i]);    
            }
        }
        return pq.top();
    }
};