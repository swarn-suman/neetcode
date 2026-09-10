class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for(int i=0; i<operations.size(); i++){
            if(operations[i] != "+" && operations[i] != "C" && operations[i] != "D"){
                int prev1 = stoi(operations[i]);
                st.push(prev1);
            }

            else if(operations[i] == "D"){       
                int prev1 = st.top();
                st.push(2*prev1);
            }
    

            else if(operations[i] == "+"){
                int prev1 = st.top();
                st.pop();

                int prev2 = st.top();

                st.push(prev1); 
                st.push(prev1 + prev2);
            }

            else{
                
                st.pop();
            }
        }

        int sum = 0;       
        while(!st.empty()){ 
            sum += st.top(); 
            st.pop(); 
        } 
            
    return sum;
   
    }
};