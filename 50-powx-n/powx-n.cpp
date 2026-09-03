class Solution {
public:
    double myPow(double x, long long n) {
        /*
        long long N = n;

        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        if (N == 0)
            return 1;

        double half = myPow(x, N / 2);

        if (N % 2 == 0)
            return half * half;

        return x * half * half;
        */

/* 

//recursive call

        double result=1;
 for(int i=0;i<n;i++){
    result*=x;
 }
 return result;
  */

if(n==0) return 1;
if(n<0) return 1/myPow(x,-n);

double half= myPow(x,n/2);

if(n%2==0) return half*half;
else {
    return half*half*x;
}

    }
};