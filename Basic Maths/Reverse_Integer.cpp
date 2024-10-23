/*
Question -> Reverse Integer
Problem Link-> https://leetcode.com/problems/reverse-integer/description/
*/
Answer -> class Solution {
public:
    int reverse(int x) {
        int c=x;
        int rev=0;
        while(x!=0){
            if((rev>INT_MAX/10) || (rev<INT_MIN/10))
            {
                return 0;
            }
            int remain=x%10;
            rev=rev*10+remain;
            x/=10;
        }
        return rev;
    }
};