class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int>hash;
        for(auto num:nums)
        {
            hash.insert(num);
        }
        int longest = 0;
        
        for(auto num: nums)
        {
            if(!hash.count(num-1))
            {
                int curr = num;
                int currStreak = 1;
                while(hash.count(curr+1))
                {
                    curr++;
                    currStreak++;
                    
                }
                longest = max(longest, currStreak);
            }
        }
        return longest;
        
        
        
    }
};
