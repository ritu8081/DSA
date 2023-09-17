
vector<int> duplicates(int arr[], int n) {
sort(arr,arr+n);
        vector<int>result;
        for(int i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1]&&arr[i]!=arr[i+1])
            {
                result.push_back(arr[i]);
            }
            
        }
        if(result.empty())
        {
            return {-1};
        }
      return result;    }