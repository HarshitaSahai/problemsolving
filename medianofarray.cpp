double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = (int)A.size();
    int m = (int)B.size();
    const vector<int> &smaller = (n <= m) ? A : B;
    const vector<int> &bigger = (n <= m) ? B : A;
    n = (int)smaller.size();
    m = (int)bigger.size();
    if(n == 0){
        if(m % 2) return (double)bigger[m / 2];
        else{
            return ((double)bigger[m / 2] + (double)bigger[(m - 1) / 2]) / 2.0; 
        }
    }
    int sz = (n + m + 1) / 2 ;
    int lo = -1, hi = n;
    while(hi - lo > 1){
        int mid = (hi + lo) >> 1LL;
        int nxmid = sz - (mid + 1) - 1;
        int mxleftsm = (mid >= 0) ? smaller[mid] : -(1e9 + 5);
        int mnrightbg = (nxmid + 1 < m) ? bigger[nxmid + 1] : 1e9 + 5;
        if(mxleftsm <= mnrightbg) lo = mid;
        else hi = mid;
    }
    int mid = lo;
    int nxmid = sz - (mid + 1) - 1;
    double mxleftsm = (mid >= 0) ? smaller[mid] : -(1e9 + 5);
    double mxleftbg = (nxmid >= 0) ? bigger[nxmid] : -(1e9 + 5);
    double mnrightsm = (mid + 1 < n) ? smaller[mid + 1] : 1e9 + 5;
    double mnrightbg = (nxmid + 1 < m) ? bigger[nxmid + 1] : 1e9 + 5;
    if((n + m) % 2) return max(mxleftsm, mxleftbg);
    else return (max(mxleftsm, mxleftbg) + min(mnrightsm, mnrightbg)) / 2;
    
}
