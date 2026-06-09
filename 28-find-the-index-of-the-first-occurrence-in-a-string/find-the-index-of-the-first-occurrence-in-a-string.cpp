class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() > haystack.size()){
            return -1;
        }
        int j = 0;
        while(j < haystack.size()){
            if(haystack[j] == needle[0]){
                int ans = j;
                int i = 0;
                int k = j;
                while(haystack[k] == needle[i] && i < needle.size()){
                    if(i == needle.size() - 1){
                        return ans;
                    }
                    i++;
                    k++;
                }
            }
            j++;
        }
        return -1;
    }
};