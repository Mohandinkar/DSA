// Modular Exponentiation for large numbers

class Solution
{
	public:
		long long int PowMod(long long int x,long long int n,long long int M)
		{
		    // Code here
		    long long int ans = 1;
		    
		    while(n > 0){
		        
		        if(n & 1){
		            //odd
		            ans = (ans*x)%M;
		        }
		        x = (x*x)%M;
		        // n = n/2
		        n>>=1;
		        
		    }
		    return ans;
		}
};