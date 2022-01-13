    int findPlatform(int arr[], int dept[], int n)
    {
    	// Your code here
    	
    	sort(arr, arr+n);
    	sort(dept, dept+n);
    	int platform = 1;
    	int maxi  = 1;
    	
    	int i=1, j=0;
    	
    	while(i< n && j<n)
    	{
    	    if(arr[i]<=dept[j])
    	    {
    	        platform++;
    	        i++;
    	    }
    	    else if(arr[i]>dept[j])
    	    {
    	        platform--;
    	        j++;
    	        
    	    }
    	    if(platform > maxi)
    	    {
    	        maxi=platform;
    	    }
    	}
    	return maxi;
    }
