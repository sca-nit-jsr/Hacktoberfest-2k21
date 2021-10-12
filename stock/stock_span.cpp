 vector <int> calculateSpan(int arr[], int n)
    {
        stack<int>st;
        vector<int>ans;
        st.push(0);
        ans.push_back(1);
        
        for(int i=1;i<n;i++){
        
        while(!st.empty() && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(st.empty())ans.push_back(i+1);
        else ans.push_back(i-st.top()); 
        
        st.push(i);
        }
    
     return ans;
    }
