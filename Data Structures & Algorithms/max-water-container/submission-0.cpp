class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int width;
        int height;
        int area=0;

        while(i<j){
            width = j-i;
            height = min(heights[i],heights[j]);
            area = max(area,width*height);

            if(heights[i]<heights[j]){
                i++;
            }

            else{
                j--;
            }
        }
        return area;
    }
};
