class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int flag=true;
        int even=0;
        int valv =10;
        for(int i=0;i<nums.size();i++){
            
            int j=1;
            while(nums[i]%valv!=nums[i]){
                valv=valv*10;
                j++;
            }
            if(j%2==0){
                even++;
            }
            valv=10;
        }
        return even;
    }
};