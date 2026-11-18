class Solution {
public:
    int getsum(int n){
        int sum = 0;

        while(n > 0) {
            int r = n % 10;
            sum += r * r;
            n /= 10;
        }
        return sum;

    };
    bool isHappy(int n) {
        
        int slow = n, fast = n;

        do {
            slow = getsum(slow);
            fast = getsum(getsum(fast));

        } while(slow != fast);

        return slow == 1;
    }
};