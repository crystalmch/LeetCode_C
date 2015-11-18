void moveZeroes(int* nums, int numsSize) {
    int count = 0;
    for(int i=0;i<numsSize;i++){
        if(*(nums+i) == 0){
            count++;
        }else{
            if(count!=0){
                *(nums+i-count)=*(nums+i);
            }
        }
    }
    for(int j=numsSize-count;j<numsSize;j++){
        *(nums+j) = 0;
    }
}