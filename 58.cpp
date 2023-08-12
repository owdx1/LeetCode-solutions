/*
Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal 
substring
 consisting of non-space characters only.

 

Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.
Example 3:

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.
 

Constraints:

1 <= s.length <= 104
s consists of only English letters and spaces ' '.
There will be at least one word in s.
Accepted
1.3M
Submissions
2.8M
Acceptance Rate
45.2%*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        string lastWord = "";
        bool whiteSpacesAreOver = false;
        for(int i = s.length() - 1; i >= 0; i-- ){
            if (s[i] != ' ' && whiteSpacesAreOver == false){
                whiteSpacesAreOver = true; 
            }
            if (s[i] == ' ' && whiteSpacesAreOver == true){
                break;
            }
            if (s[i] != ' ' && whiteSpacesAreOver == true){
                lastWord.push_back(s[i]);
            }


        }
        return lastWord.length();
    }
};
