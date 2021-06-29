class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> s1;
        if(s.length()==0)
        {
            return false;
        }
        if((s.length()%2)!=0)
        {
            return false;
        }
        for(int i=0;i<s.length();i++)
        {
            char ch = s[i];
            if(ch==')'||ch==']'||ch=='}')
            {
                if(s1.size()==0)
                    return false;
                if(ch=='}' && s1.top()!='{')
                    return false;
                if(ch==']' && s1.top()!='[')
                    return false;
                if(ch==')' && s1.top()!='(')
                    return false;
                s1.pop();
            }
            else
            {
                s1.push(ch);
            }
            
        }
        if(s1.size()==0)
            return true;
        return false;
    }
};
