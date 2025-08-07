long long factional(int x){
    if(x == 0 || x== 1) return 1;
    return x * factional(x-1);
}
int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}