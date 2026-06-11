class Solution {
public:
    string decodeString(string s) {
        stack<int> j;
        stack<string> c;
        int num = 0;
        for(char ch : s){
            if(isdigit(ch)){
                num = num * 10 + (ch - '0');
            }
            else if(ch == '['){
                j.push(num);
                c.push("[");
                num = 0;
            }
            else if(ch == ']'){
                string temp = "";
                while(!c.empty() && c.top() != "["){
                    temp = c.top() + temp;
                    c.pop();
                }
                c.pop();
                int r = j.top();
                j.pop();
                string exp = "";
                for(int i = 0 ; i < r ; i++){
                    exp += temp;
                }
                c.push(exp);
            }
            else if(isalpha(ch)){
                c.push(string(1 , ch));
            }
        }
        string ans = "";
        while(!c.empty()){
            ans = c.top() + ans;
            c.pop();
        }
        return ans;
    }
};