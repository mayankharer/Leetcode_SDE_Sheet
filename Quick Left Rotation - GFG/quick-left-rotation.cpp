//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	void leftRotate(int a[], int k, int n) 
	{ 
	   // Your code goes here
	   vector<int> res(a,a+n);
	   k = k%n;
	   int i=0;
	   while(k<n){
            a[i++] = a[k++];	       
	   }
	   int j=0;
	   while(i<n){
	       a[i++] = res[j++];
	       
	   }
	   //vector<int > v(a,a+n);
	   //fill(a,a+n,0);
	   //reverse(v.begin(),v.end());
	   //reverse()
	} 
		 

};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends