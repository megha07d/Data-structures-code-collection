class Solution {
public:
    int firstUniqChar(string s) 
    {
        unordered_map<char,int> map;
        for(char ch:s)
        {
            map[ch]++;
        }
        
        char ch;
        
        for(int i=0;i<s.length();i++)
        {
            ch = s[i];
            if(map[ch]==1)
            {
                return i;
            }
        }
        
        return -1;
    }
};