class Solution{
public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        int i=0,j=0;
        vector<int> ans;
        while(i<n && j<m)
        {
            if(arr1[i] == arr2[j])
            {
                if(ans.empty() || arr1[i]!=ans[ans.size()-1])
                {
                    ans.push_back(arr1[i]);
                }
                i++;
                j++;
                
            }
            else if(arr1[i]<arr2[j])
            {
                if(ans.empty() || arr1[i]!=ans[ans.size()-1])
                {
                    ans.push_back(arr1[i]);
                    
                }
                i++;
                
            }
            else
            {
                if(ans.empty() || arr2[j]!=ans[ans.size()-1])
                {
                    ans.push_back(arr2[j]);
                    
                }
                j++;
                
            }
        }
        while(j<m)
        {
            if(ans.empty() || arr2[j]!=ans[ans.size()-1])
                {
                    ans.push_back(arr2[j]);
                    
                }
                j++;
                
        }
        while(i<n)
        {
            if(ans.empty() || arr1[i]!=ans[ans.size()-1])
                {
                    ans.push_back(arr1[i]);
                    
                }
                i++;
                
        }
        return ans;
    }
};
