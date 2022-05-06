class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(),a.end());
    int min=a[n-1]-a[0];
    for(int i=0;i<=n-m;i++)
    {
        if((a[i+m-1]-a[i])<min)
        min = a[i+m-1]-a[i];
    }
    return min;
    }   
};
