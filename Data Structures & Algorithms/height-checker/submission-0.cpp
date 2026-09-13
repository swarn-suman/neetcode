class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> arr;
        for(auto it: heights){
            arr.push_back(it);
        }

        sort(arr.begin(),arr.end());

        int wrong = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] != heights[i]){
                wrong++;
            }
        }
        return wrong;
    }
};