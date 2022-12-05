/*given an array 'a' and your task is to  generate another array 'b' by applying only one operation  any number of times .in one operation any number of times.in one operation you can swap a[i] &a[i+1],but only if they sum up to even 
note ,that the array b will be lexicographically  largest  among all that can be generated  from array 'a' ,after applying  the above operation number of times .

example 1:
    input:[1,3,4,2]
    output:[3,1,4,2]

example 2:
    input:[1,3,5]
    output:[5,3,1]

note:sum of 2 odd numbers or 2 even numbers makes even number

steps to solve the above program:
step 1:check the parity of the number that is if both or even or odd and increament the j value.
step 2:if its true sort the elments in greater order



*/
class Solution
{
    public:
        vector <int> lexiographicallyLargest(vector <int> &a,int n)
        {
            // Code here
            int i=0,j=0; 
            while(j<n)
            {
                if((a[i]& 1) == (a[j]&1))
                j++;
                else
                {
                    sort (a.begin()+i,a.begin()+j,greater<int>());
                    i=j;
                }
            }
            sort(a.begin()+i,a.end(),greater<int>());
            return a;
            
        }
}; 