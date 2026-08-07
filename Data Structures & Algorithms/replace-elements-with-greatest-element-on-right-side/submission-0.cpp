class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i = arr.size()-1;
        int max_term = -1;
        while(i>=0){
            int duplicate = arr[i];
            arr[i] = max_term;

            if(duplicate > max_term){
                max_term = duplicate;
            }
            i--;
            
        }
        return arr;
    }
};