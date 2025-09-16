int divide(int dividend, int divisor) {
    if(divisor == 0) {
        return INT_MAX;
    }
    if(divisor == -1 && dividend == INT_MIN) {
        return INT_MAX;
    }
    int quo = dividend / divisor;
    return quo;
}