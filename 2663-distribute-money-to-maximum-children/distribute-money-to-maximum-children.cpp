class Solution {
public:
    int distMoney(int money, int children) {
        if(money < children)
            return -1;

        money -= children;

        int ans = min(children, money / 7);
        money -= ans * 7;
        children -= ans;

        if(children == 0 && money > 0)
            ans--;

        if(children == 1 && money == 3)
            ans--;

        return ans;
    }
};