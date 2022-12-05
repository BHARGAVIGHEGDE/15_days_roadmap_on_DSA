/*you are guven an array arr of length n of 0's and 1's .find the total number of subarrays

example:
    input:n=4
          arr[]={0,0,1,0}
    output:4        

explanation:the total number of arrays that can be formed from the arr[] are {0},{0},{0},{0,0}=4

*/
long long int fn(long long int n)
{
   return  (n*(n+1))/2;
}

long long int no_of_subarrays(int n, vector<int> &nums) {
    
   long long  int ans=0,c=0;
   for(int i=0;i<n;i++)
   {
       if(nums[i]==1)
       {
           ans+=fn(c);
           c=0;
       }
       else
       {
           c++;
       }
       
   }
   ans+=fn(c);
       return ans;
   
}
