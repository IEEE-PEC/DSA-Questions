class Solution {
public:
    bool isPalindrome(int x) {
        long long int y = 0;
        int temp;
        if(x < 0){
            return false;
        }
        else{
            temp = x;
            while(x > 0){
                y = (y*10) + x%10;
                x = x/10;
            }
            if(temp == y)
                return true;
            else
                return false;
        }
    }
};