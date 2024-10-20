class Solution {
public:
    void swap_till_end(vector<int>& nums, size_t pos)
    {
        int val = nums[pos];
        while (pos < nums.size() - 1 && nums[pos + 1] != val)
        {
            std::swap(nums[pos], nums[pos + 1]); 
            pos++;
        }  
    }
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (int i = nums.size() - 1; i >= 0; --i) {
            if (nums[i] == val) 
            {
                this->swap_till_end(nums, i);
                k++;
            } 
       }
        return nums.size() - k;
    }
};

