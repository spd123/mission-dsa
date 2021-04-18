# https://www.geeksforgeeks.org/find-smallest-value-represented-sum-subset-given-array/    
    long long smallestpositive(vector<long long> array, int n)
    { 
        sort(array.begin(),array.end());
        long long cur = 1;
        for(int i=0;i<n && array[i]<=cur;i++){
            cur += array[i];
        }
        
        return cur;
    } 
