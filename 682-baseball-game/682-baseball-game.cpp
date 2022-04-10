class Solution {
public:
    int calPoints(vector<string>& ops) {
        int sum =0;
        
        stack<int> st;
        
        for(auto i : ops){
            if(i=="C"){
                st.pop();
            }
            else if(i=="D"){
                st.push(2*st.top());
            }
            else if(i=="+"){
                int a= st.top();
                st.pop();
                int b = a+st.top();
                st.push(a);
                st.push(b);
            }
           else {
               st.push(stoi(i));
           } 
        }
        
        while(!st.empty()){
            sum = st.top()+sum;
            st.pop();
        }
        return sum;
    }
};