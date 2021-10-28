// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.

class Solution{
		

	public:
	int minimumCost(int cost[], int N, int W) 
	{ 
        // Your code goes here
        long long int inf=100000000;
        int wt[N];
        for(int i=0; i<N; i++)   wt[i]=i+1;
        
        vector<vector<int>> t(N+1,vector<int> (W+1));
        
        for(int i=0; i<N+1; i++){
            for(int j=0; j<W+1; j++){
                
                if(j==0)  t[i][j]=0;
                else if(i==0)  t[i][j]=inf;
                
                else if(wt[i-1] > j || cost[i-1] == -1)    t[i][j]=t[i-1][j];
                
                else t[i][j]=min(t[i-1][j] , cost[i-1] + t[i][j-wt[i-1]]);
            }
        }
        return (t[N][W]==inf)?-1:t[N][W];
	} 
};


// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minimumCost(a, n, w) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends
