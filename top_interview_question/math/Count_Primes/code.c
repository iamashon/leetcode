int countPrimes(int n){

    if ( n == 0) return 0;
    if ( n == 1) return 0;
    
    int isPrime[n];
    //set all flag to true
    for ( int i = 2; i < n; i++)
        isPrime[i] = 1;
    for ( int i = 2; i*i < n; i++) {
        if (!isPrime[i]) continue;
        for ( int j = i*i; j < n; j+=i) {
            isPrime[j] = 0;
        }
    }
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime[i]) count++;
    }
    return count;
}
