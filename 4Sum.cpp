class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& num, int target) {
        
        vector<vector<int>>res;
        if(num.size()==0)
        {
            return res;
        }
        int n = num.size();
        
        sort(num.begin(), num.end());
        
        for(int i=0;i<n;i++)
        {
            int target_3 = target-num[i];
            for(int j=i+1;j<n;j++)
            {
                int target_2 = target_3 - num[j];
                int left = j+1;
                int right = n-1;
                while(left<right)
                {
                    int two_sum = num[left]+num[right];
                    if(two_sum<target_2)
                    {
                        left++;
                    }
                    else if(two_sum>target_2)
                    {
                        right--;
                    }
                    else
                    {
                        vector<int>v(4,0);
                        v[0]=num[i];
                        v[1]=num[j];
                        v[2]=num[left];
                        v[3]=num[right];
                        res.push_back(v);
                        
                        //[rocess duplicates of number 3
                        while(left<right && num[left]==v[2])
                        {
                            left++;
                        }
                        //process duplicates of number 4
                        while(left<right && num[right]==v[3])
                        {
                            right--;
                        }
                        
                        
                    }

                }
                     //Process duplicates of number 2
                    while(j+1<n && num[j+1]==num[j])
                        {
                            j++;
                        }
                
                
            }
            //Process duplicates of number 2
            while(i+1<n && num[i+1]==num[i])
            {
                i++;
            }
        }
        return res;
               
        
    }
};
