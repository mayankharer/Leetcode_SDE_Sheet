class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;
        
        //------------------ STANDARD DUTCH NATIONAL FLAG ALGORITHM IMPLEMENTATION ----------------- 
        while(mid<=high){
            switch(nums[mid]){
                case 0:
                    swap(nums[low++], nums[mid++]); //increment low and high
                    break;
                case 1:     // if nums[mid] is 1 no swapping required and just increment the mid pointer                                  by 1
                    mid++;
                    break;
                case 2:     // if nums[mid] is 2 then swap mid and high and decrement high pointer
                    swap(nums[mid], nums[high--]);//this function swaps the mid and nums high and then                                                         decrements the high pointer
                    break;
            }
        }
    }
};