class Solution {
public:
    int strStr(string haystack, string needle) {
        int a = 0;
        string sub = "";
        for(int i = 0 ; i < haystack.size() ; i++){
            sub.push_back(haystack[i]);
            if(i - a + 1 > needle.size()){
                sub.erase(0 , 1);
                a++;
            }
            if(i - a + 1 == needle.size()){
                if(sub == needle){
                    return a;
                }
            }
        }
        return -1;
    }
};