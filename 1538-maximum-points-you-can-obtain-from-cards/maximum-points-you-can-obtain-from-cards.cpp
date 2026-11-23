class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int score=0;

        for(int i=0 ; i<k; i++){
            score += cardPoints[i];
        }
        int maxi = score;

        int i = k - 1;
        int j = n - 1;

        while(i >= 0) {

            score -= cardPoints[i]; 
            score += cardPoints[j];  

            maxi = max(maxi, score);

            i--;
            j--;
        }
        return maxi;
    }
};