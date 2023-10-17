// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".



// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        string ans;

        int i=0;
        while(true){
            char ch = 0;

            for(auto str : strs){
                if(i >= str.size()){
                    ch = 0;
                    break;
                }

                if(ch == 0){
                    ch = str[i];
                }else if(str[i] != ch){
                    ch = 0 ;
                    break;
                }
            }
            if(ch == 0){
                break;
            }
            ans.push_back(ch);
            i++;
        }
        return ans;

    }
};