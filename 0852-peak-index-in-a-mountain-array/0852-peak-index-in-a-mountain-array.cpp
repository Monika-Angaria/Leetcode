class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maxindex=0;
        for(int i=0;i<arr.size();i++){
         if(arr[i]>arr[maxindex]) maxindex=max(0,i);
        }
        return maxindex;
    }
};