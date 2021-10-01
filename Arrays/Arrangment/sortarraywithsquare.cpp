vector<int> Solution::solve(vector<int> &A) {
    //vector<int> square;
    for(int i=0; i<A.size(); i++)
    {
        A[i]= A[i]*A[i];
    }
    sort(A.begin(),A.end());
    return A;
}