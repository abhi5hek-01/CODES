class Solution {
public:
    int fib(int n) {
    int ans;
    if(n==0)
    {
      return 0;
    }
    if(n==1)
    {
    return 1;
    }
    if(n>1)
    {

      ans=fib(n-2)+fib(n-1);  
    }
     return ans;   
    }
};
