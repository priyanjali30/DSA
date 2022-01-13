    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        
        vector<pair<int,pair<int, int>>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back({end[i], {start[i], i}});
        }
        
        sort(v.begin(), v.end());
        
        int end_limit = v[0].first;
        
        int i=1;
        int count = 1;
        while(i<n)
        {
            if(v[i].second.first > end_limit)
            {
                count++;
                end_limit = v[i].first;
            }
            i++;
        }
        
        return count;
        
        
    
