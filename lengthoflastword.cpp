int Solution::lengthOfLastWord(const string A) {
    int len = 0;
    for(int i = A.size() - 1 ; i >= 0 ; i--)
    {
        if(len == 0)
        if(A[i] == ' ')
            i--;
        if(A[i] != ' ')
            len++;
        if(len > 0 && A[i] == ' ')
        return len;
    }
        return len; 
    
    
}
