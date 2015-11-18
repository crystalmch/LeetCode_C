int missingNumber(int* nums, int numsSize) {
    int total = 0;
    int min = *nums;
    int original;
    if(numsSize<=1){
        if(*(nums)>0)
            return *(nums)-1;
        else
            return *(nums)+1;
    }
    
    for(int i=0;i<numsSize;i++){
        int j = *(nums+i);
        if(j < min){
            min = j;
        }
        total += j; 
    }
    original = (2*min+numsSize)*(numsSize+1)/2;
    if(min == 0){
        return (original-total);
    }else{
        return 0;
    }
}