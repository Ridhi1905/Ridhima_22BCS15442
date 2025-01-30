// leetcode problem 7 : reverse Integer

class Solution {
public:
    int reverse(int x) {
        int m=x;
        int count=0;
        while(m!=0){
            m=m/10;
            count++;
        }
        
        long long n=0;
        long long y=x;
        for(int i=0;i<count;i++){
            y=x%10;
            n=n*10+y;
            x=x/10;
        }
        if (n > INT_MAX || n < INT_MIN) {
            return 0;
        }
        return n;
    }
};
