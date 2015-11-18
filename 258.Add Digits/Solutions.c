int addDigits(int num) {
    
    if (num == 0) return 0;
    
    int ret = num % 9;
    
    if(ret == 0) {
        ret = 9;
    }
    
    return ret;
}