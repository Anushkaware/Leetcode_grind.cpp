class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3){
            return false;
        }
        int maxInd=0;
        int maxi=arr[0];
        for(int i=0;i<arr.size();i++){
            if(maxi<arr[i]){
                maxi=arr[i];
                maxInd=i;
            }
        }
        if(maxInd==0||maxInd==arr.size()-1){
            return false;
        }
         for(int i=0;i<maxInd;i++){
            if(arr[i]>=arr[i+1]){
                return false;
            }
         }
            for(int i=maxInd;i<arr.size()-1;i++){
                if(arr[i]<=arr[i+1]){
                    return false;
                }
            }
            return true;

        
    }
};