/* 
1108. Defanging an IP Address
Easy
1.7K
1.7K
Companies
Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".

 

Example 1:

Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"
Example 2:

Input: address = "255.100.50.0"
Output: "255[.]100[.]50[.]0"
 

Constraints:

The given address is a valid IPv4 address.
Accepted
532.9K
Submissions
599.1K
Acceptance Rate
88.9%
  */
class Solution {
public:
    string defangIPaddr(string address) {
        string defang = "[.]";
        string newWord = "";
        for(int i = 0; i < address.size(); i++){
            if(address[i] == '.'){
                newWord = newWord + defang;
            }
            else{
                newWord = newWord + address[i];
            }
        }
        return newWord;
    }
};
