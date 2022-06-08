class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
 int m=(int)nums1.size();
        int n=(int)nums2.size();
        int cnt1=0,cnt2=0;
        double ans=0;
        if((m+n)&1){
            cnt1=(m+n+1)/2;
            cnt2=(m+n+1)/2;
        }
        else{
            cnt1=(m+n)/2;
            cnt2=cnt1+1;
        }
        int cnt=0, i=0, j=0;
        while(i<m && j<n){
            ++cnt;
            if(nums1[i]<nums2[j]){
                if(cnt==cnt1){
                    ans+=nums1[i];
                    cout<<ans<<"\n";
                }
                if(cnt==cnt2){
                    ans+=nums1[i];
                    cout<<ans<<"\n";
                }
                ++i;
            }
            else{
                if(cnt==cnt1){
                    ans+=nums2[j];
                    cout<<ans<<"\n";
                }
                if(cnt==cnt2){
                    ans+=nums2[j];
                    cout<<ans<<"\n";
                }
                ++j;
            }
        }
        while(i<m){
            ++cnt;
            if(cnt==cnt1){
                ans+=nums1[i];
                cout<<ans<<"\n";
            }
            if(cnt==cnt2){
                ans+=nums1[i];
                cout<<ans<<"\n";
            }
            ++i;
        }
        while(j<n){
            ++cnt;
            if(cnt==cnt1){
                ans+=nums2[j];
                cout<<ans<<"\n";
            }
            if(cnt==cnt2){
                ans+=nums2[j];
                cout<<ans<<"\n";
            }
            ++j;
        }
        return ans/2.0;
        
    }
};