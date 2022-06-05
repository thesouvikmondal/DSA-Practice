#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <iterator>
using std::vector;
using std::string;
using std::max;
class Solution {
    public:
    long long TrackSpeed(long A[], long H[], long N, int L, long hour)
    {
        long long ans = 0;
        for (int i = 0; i < N; i++)
        {
            if (H[i] + hour * A[i] >= L)
                ans += (H[i] + hour * A[i]);
        }
        return ans;
    }
    long buzzTime(long N, long M, long L, long H[], long A[])
    {
        // code here
        long long l = 1, r = INT_MAX;
        long long mid, trackspeed;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            trackspeed = TrackSpeed(A, H, N, L, mid);
            if (trackspeed > M)
                r = mid - 1;
            else if (trackspeed < M)
                l = mid + 1;
        }
        trackspeed = TrackSpeed(A, H, N, L, mid);
        if (trackspeed >= M)
            return mid;
        return mid + 1;
    }
};