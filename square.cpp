class Solution {
public:
    int countGoodRectangles(const vector<vector<int>>& rectangles) {
        
        int side=0, maxLen=0, count=0;
        
        for(const auto& i:rectangles) {
            
            side=min(i[0],i[1]);
            
            if(maxLen<side) {
                maxLen=side;
                count=1;
            }
            else if(maxLen==side) ++count;
        }
        
        return count;
    }
};
