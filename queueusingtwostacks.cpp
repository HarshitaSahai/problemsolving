int StackQueue :: pop()
{
        // Your Code     
        
        // If S2 is empty tranfer all elements to S2 from S1 and pop out 1st element
        if(s2.empty())
        {
            if(s1.empty())
            {
                return -1;
            }
            else{
                while(!s1.empty())
                {
                    int ele=s1.top();
                    s1.pop();
                    s2.push(ele);
                }
                int ele=s2.top();
                s2.pop();
                return ele;
            }
        }
        // S2 is not empty so just pop out element from it
        else{
            int ele=s2.top();
            s2.pop();
            return ele;
        }
}
