/*given three integers 'A' denoting the first term of an arithmatic sequence 'C' denoting the common difference  of an arithmatic sequence and an integer 'B' .you need to tell whether 'B' exists in the arithmetic expression or not.


the arithmatic sequence is:a+c*n=b or it should satisfy the condition (b-a)%c
example 1:
input:A=1,B=3,C=2
output:1
example 2:
input:A=2,b=3,c=2
output:0

the cases that can exist in this problem are:
case 1:where b<a and c>0
case 2:b>a and c<0
case 3:if(c==0)&&(a==b)
case 4:(b-a)%c==0
*/
class Solution{
public:
    int inSequence(int A, int B, int C){
        // code here
        if(C==0)
        {
            if(B==A)
            
            return 1;
            return 0;
        }
        if(B<A and C>0)
        {
            return 0;
            
        }
        if(B>A and C<0)
        {
            
            return 0;
        }
        if((B-A)%C==0)
        
            return 1;
            return 0;
        

