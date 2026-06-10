class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int l = s.size();
        for(int i = l / 2 ; i >= 1 ; i--){
            if(l % i == 0){
                string str = s.substr(0 , i);
                int times = l / i;
                string newStr = "";
                while(times != 0){
                    newStr += str;
                    times--;
                }
                if(newStr == s){
                    return true;
                }
            }
        }
        return false;
    }
};