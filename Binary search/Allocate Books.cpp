// https://www.interviewbit.com/problems/allocate-books/

// if its possible to get target as the min sum with B students
int isPossible(vector<int> &A, int B, int target){
    int student = 1, curSum = 0;
    for(int x: A){
        if(curSum + x <= target)
            curSum += x;
        else{
            student++;
            curSum = x;
        }
    }
    return student <= B;
}

int Solution::books(vector<int> &A, int B) {
    int n = A.size();
    if(B > n) return -1;

    int mx = 0, sum = 0;
    for(int x: A){
        sum += x;
        mx = max(mx, x);
    }

    // maximum possible is sum, minimum possible is max of A
    int l = mx, r = sum;
    while(l < r){
        int md = (r - l)/2 + l;
        if(isPossible(A, B, md) )
            r = md;
        else
            l = md + 1;
    }
    return r;
}
