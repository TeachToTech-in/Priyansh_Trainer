bool isPalindrome(int x) {
    if(x < 0)
    return 0;
    int num = x;
    long rev = 0;
    while(num) {
        int rem = num % 10;
        rev = (rev*10) + rem;
        num /= 10;
    }
    if(x == rev) 
    return true;

    return false;
}