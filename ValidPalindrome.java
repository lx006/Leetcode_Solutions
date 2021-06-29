class Solution {
    public boolean isPalindrome(String s) 
    {
        s = s.replaceAll("\\p{Punct}","");
        s = s.replaceAll("\\s", "");
        String rev =  new StringBuffer(s).reverse().toString();
        char[] ch1 = s.toLowerCase().toCharArray();
        char[] ch2 = rev.toLowerCase().toCharArray();
        for(int i=0;i<ch1.length;i++)
        {
            if(ch1[i]!=ch2[i])
                return false;
        }
        return true;
        
    }
}
