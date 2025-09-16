int addDigits(int num) {
    int sum=0;
    while(num > 9) {
        int n = num;
        while(n != 0) {
            int rem = n%10;
            sum += rem;
            n /= 10;
        }
        num = sum;
        sum = 0;
    }
    return num;
}