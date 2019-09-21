void Solution::setZeroes(vector<vector > &A) {
int n=A.size();
int m=A[0].size();
int zerothRows=1;
int zerothCols=1;
if(A[0][0]==0)
{
zerothRows=0;
zerothCols=0;
A[0][0]=1;
}
for(int i=0;i<=n-1;i++)
{
if(A[i][0]==0)
{
zerothCols=0;
}
}
for(int j=0;j<=m-1;j++)
{
if(A[0][j]==0)
{
zerothRows=0;
}
}
for(int i=1;i<=n-1;i++)
{
for(int j=1;j<=m-1;j++)
{
if(A[i][j]==0)
{
A[0][j]=0;
A[i][0]=0;
}
}
}

for(int i=0;i<=n-1;i++)
{
    if(A[i][0]==0)
    {
        int j=0;
        while(j<=m-1)
        {
            A[i][j]=0;
            j++;
        }
    }
}
for(int j=0;j<=m-1;j++)
{
    if(A[0][j]==0)
    {
        int i=0;
        while(i<=n-1)
        {
            A[i][j]=0;
            i++;
        }
    }
}
if(zerothRows==0)
{
    int j=0;
    while(j<=m-1)
    {
        A[0][j]=0;
        j++;
    }
}
if(zerothCols==0)
{
    int i=0;
    while(i<=n-1)
    {
        A[i][0]=0;
        i++;
    }
}
}
