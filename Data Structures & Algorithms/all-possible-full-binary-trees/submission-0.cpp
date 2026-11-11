class Solution {
public:
    vector<TreeNode*> allPossibleFBT(int n) {
        function<vector<TreeNode*>(int)> build=[&](int count){vector<TreeNode*> answer;if(count==1){answer.push_back(new TreeNode(0));return answer;}for(int leftCount=1;leftCount<count-1;leftCount+=2)for(auto left:build(leftCount))for(auto right:build(count-1-leftCount))answer.push_back(new TreeNode(0,left,right));return answer;};return n%2==0?vector<TreeNode*>{}:build(n);
    }
};
