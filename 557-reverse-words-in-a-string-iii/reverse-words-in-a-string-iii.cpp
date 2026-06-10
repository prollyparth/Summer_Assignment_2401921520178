class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        while(i < s.size()){
            while(i < s.size() && s[i] == ' '){
                i++;
            }
            int j = i;
            while(j + 1 < s.size() && s[j + 1] != ' '){
                j++;
            }
            int left = i;
            int right = j;
            while(left < right){
                char c = s[left];
                s[left] = s[right];
                s[right] = c;
                left++;
                right--;
            }
            i = j + 1;
        }
        return s;
    }
};