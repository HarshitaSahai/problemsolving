using System;
public class GFG {
    
	static public void Main () {
		int t=Int32.Parse(Console.ReadLine());
		while(t-->0)
		{
		   
		    string s=Console.ReadLine();
		  
		   int n=s.Length;
		   
		    int [,]dp=new int[n,n];
		    
		   
		    for(int i=0;i<n;i++)
		    {
		        for(int j=0;j<n;j++)
		        {
		            if(i==j)
		            dp[i,j]=1;
		        }
		    }
		    
		    for(int len=2;len<=n;len++)
		    {
		        for(int i=0;i<n-len+1;i++)
		        {
		            int j=i+len-1;
		           if(s[i]==s[j] && len==2)
		           {
		               dp[i,j]=1;
		           }
		           else if(s[i]==s[j] && dp[i+1,j-1]==1)
		           dp[i,j]=1;
		           
		           else
		           dp[i,j]=0;
		            
		           
		            
		        }
		    }
		    int max=Int32.MinValue;
		    int strt=0;
		    for(int i=0;i<n;i++)
		    {
		        for(int j=0;j<n;j++)
		        {
		            if(max<Math.Abs(i-j) && dp[i,j]==1)
		            {
		                max=Math.Abs(i-j);
		                strt=i;
		                
		                
		            }
		            
		        }
		       
		    }
		    Console.WriteLine(s.Substring(strt,max+1));
		   
		}
	}
}
