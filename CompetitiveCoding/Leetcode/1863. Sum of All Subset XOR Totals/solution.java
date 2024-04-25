class Solution {
    public int subsetXORSum(int[] nums) {
       //bitmask 
        int subsetTotalLength = 1 << nums.length;
        int sum = 0;
        
        for(int i = 0; i < subsetTotalLength; i++){
            
            int xorTotal = 0;

            for(int j = 0; j < nums.length ; j++){
                
                if((i & (1 << j) ) != 0) {
                    xorTotal ^= nums[j];
                }

            }
            sum += xorTotal;
        }
        
        return sum;
    }


}