class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        int j=-1;

        for(int i=0; i<operations.size(); i++){
            if(operations[i]!="+"&&operations[i]!="D"&&operations[i]!="C"){
                ans.push_back(stoi(operations[i]));
                j++;
            }

            else if(operations[i]=="D"){
                ans.push_back(2*ans[j]);
                j++;
            }

            else if(operations[i]=="+"){
                ans.push_back(ans[j]+ans[j-1]);
                j++;
            }

            else{
                ans.pop_back();
                j--;
            }
        }

        int sum=0;
        for(int k=0; k<=j; k++){
            sum = sum+ans[k];
        }
        return sum;
    }
};