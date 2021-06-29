class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int size_S = s.length();
        int size_T = t.length();
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(size_S != size_T)
        {
            return false;
        }
        else
        {
            for(int i=0;i<size_S;i++)
            {
                if(s[i]!=t[i])
                    return false;
            }
        }
        return true;
        
    }
};
