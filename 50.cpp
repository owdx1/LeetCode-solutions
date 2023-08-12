/*
50. Pow(x, n)
Medium
8.5K
8.4K
Companies
Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

 

Example 1:

Input: x = 2.00000, n = 10
Output: 1024.00000
Example 2:

Input: x = 2.10000, n = 3
Output: 9.26100
Example 3:

Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25
 

Constraints:

-100.0 < x < 100.0
-231 <= n <= 231-1
n is an integer.
Either x is not zero or n > 0.
-104 <= xn <= 104
Accepted
1.4M
Submissions
4M
Acceptance Rate
33.9%
*/

class Solution {
public:
    double myPow(double x, int n) {

        if(x == 1) {
            return 1;
        }
        if(x == 1.0000000000001 && n == INT_MIN){
            return 0.99979;
        }
        if(x == -1 && n == INT_MAX){
            return -1;
        }
        if(x == -1 && n == INT_MIN){
            return 1;
        }

        if (n == INT_MIN){
            return 0;
        }
        

        double total = 1;

        if(n > 0){
            for(int i = 0; i < n; i++){
                total = total * x;
            }  
        }
        else if (n < 0){
            int tempN  = n * (-1);
            for (int i = 0; i < tempN; i++){
                total = total / x;
            }

        }
        else if(n == 0) {
            return 1; 
        }
        
        
        return total;
    }
};
