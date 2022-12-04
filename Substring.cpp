//given two string A and B.find the number of times A has to be repeated such that B is a substring of it.
/*example:
a='abcde'
b='ea'
output:k=2

Note:there exists a two condition such a way that 
case 1:if |a|>=|b|
        check if b is already a substring of a
        else it can have atmost 2 repetations as per given above example
case 2:if |a|<|b|
        then a has to be repeated k number of times in such a way that a has to be equal or greater than b
        else a has to be repeated for k+1 times.      


Step 1:find the number of times k has to be repeated by setting default value of k =1 in final variable     
*/
bool check(string x,string y){
    for(int i=0;i<x.size()-y.size();i++)
    {
        char temp=x.substr(i,y.size());
        if(temp==true)
        {
            return true;
        }
        return false;
    }
}
class repetation{
    public:
   
    int min_repeat(string a,string b)
    {
        string final=a;
        int k=1;
        while(final.size()<b.size()){
            final+=a;
            k++;
        }
        if(check(final,b)==true)
        {
            return k;
        }
        final+=a;
        k++;
        if(check(final,b)==true){
            return k;
        }
        return -1;
    }
}






