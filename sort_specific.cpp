void sortIt(long long arr[], long long n)
    {
        vector<int> even;
        vector<int> odd;
         for(int i = 0; i<n; i++){
            if(arr[i]%2==0){
                even.push_back(arr[i]);
            }
        }
        
        for(int i = 0; i<n; i++){
            if(arr[i]%2!=0){
                odd.push_back(arr[i]);
            }
        }
        
        
        sort(odd.begin(), odd.end(), greater<int>());
        sort(even.begin(),even.end());
        
        for(int i = 0; i<odd.size(); i++){
            
                 arr[i] = odd[i];
            
        }
        int k= 0;
        for(int i = odd.size(); i<n; i++){
            
                 arr[i] = even[k];
                 k++;
            
        }
        
        
    }
