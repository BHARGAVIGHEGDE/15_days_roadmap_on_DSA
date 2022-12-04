/* given an array arr[] of size N having distinct elements the task is to find the next greater elements ,the task is to find the next greater elements for each element of the array in order of their appearance in the array.
if these don't exist greater of current element,then next greater element for current element is -1.
for example,next greater of last element is always -1

example 1:
    input:n=4,arr[]=[2,3,1,4]
    output:[3,4,4,-1]

example 2:
    input:n=6,arr[]=[7,10,0,2,3,5]
    output:[10,-1,2,3,5,-1]

steps to solve the above algorithm:
step 1: traverse the given array
        arr[]=[2,3,1,4]
        temp[];
        i=0;
        j=i+1;
        if(arr[j]>arr[i])
        then,temp=arr[j]
        i++;
        j++;break;
        else return temp[i]=-1;

result:the time complexity for the above steps results in n<=10^5,to reduce the time complexity
        stack method can be used.    


steps to solve the above algorithm using stack:
step 1:check if the given stack is empty or not,if not push the last element to the stack from the array.
step 2: check if the top of stack element is greater than the elements in the array.
step 3:if yes,push that array element to the stack
        else,pop the top element from the stack and repeat step 2 again.

*/
class elements{
    public:vector<long long>nextlargerelement(vector<long long>arr,int n)
    {
        stack<long long>st;
        vector<long long>ans(n,-1);
        for(int i=n-1;i>=0;i--)
        {
            if(st.empty())
            {
                st.push(arr[i]);

            }
            else{
                while(!st.empty())
                {
                    if(arr[i]<st.top())
                    {
                        ans[i]=st.top();
                        break;
                    }
                    st.pop();
                }
                st.push(arr[i]);
            }
            st.push(arr[i]);
        }
        return ans;

    }
    
    };






