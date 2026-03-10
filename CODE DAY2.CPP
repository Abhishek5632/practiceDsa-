
//344. Reverse string
class Solution{
  void reverseString(vector<char>& s) {
int left=0;int right=s.size();
while(left<right){
    swap(s[left],s[right]);
    left++;
    right--;
}
  }
};
//125. Valid Palindrome (1 . Approach 1: Two Pointer Approach)
class Solution {
public:
    bool isPalindrome(string s) {
  int left=0;int right=s.size()-1;
while(left<right){
    if(!isalnum(s[left])){
        left++;
    }
    if(!isalnum(s[right])){
        right--;
    }
    if(isalnum(s[left]) && isalnum(s[right])){
        if(tolower(s[left]) != tolower(s[right])){
            return false;
        }
        left++;
        right--;
    }
}
    }
return true;
};
//125. Valid Palindrome (2 . Approach 2: String Manipulation)
class Solution {
public:    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                str+=tolower(s[i]);
            }
        }
        string rev=str;
        reverse(rev.begin(),rev.end());
        return str==rev;

}
};

// 14. Longest Common Prefix(1 . Approach 1: Horizontal Scanning)
class Solution {
public:
 
    
};class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        
        string prefix = strs[0]; // pehli string ko prefix maan lo
        
        for(int i = 1; i < strs.size(); i++){
            // Jab tak prefix match nahi karta, chota karte jao
            while(strs[i].find(prefix) != 0){
                prefix = prefix.substr(0, prefix.size() - 1);
                if(prefix.empty()) return "";
            }
        }
        return prefix;
    }
};

// 14. Longest Common Prefix(2 . Approach 2: Vertical Scanning)
class Solution {
public:

    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        
        for(int i = 0; i < strs[0].size(); i++){
            char c = strs[0][i]; // pehli string ka character
            
            for(int j = 1; j < strs.size(); j++){
                // Agar current string ka character match nahi karta, toh return karo
                if(i >= strs[j].size() || strs[j][i] != c){
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0]; // poori pehli string common prefix hai
    }
};

// 1768. Merge Strings Alternately (1 . Approach 1: Two Pointer Approach)
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        bool t= false;
        string ans="";
        while(i<word1.length()&&j<word2.length()){
if(t==false){
    ans+=word1[i];
t=true;
i++;
}
if(t==true){
    ans+=word2[j];
t=false;
j++;
}
        }
while(j<word2.length()){
ans+=word2[j];
j++;
}
while(i<word1.length()){
ans+=word1[i];
i++;
}
        
        return ans;
    }
};