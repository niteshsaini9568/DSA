class Solution {
  public:
    int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

/* fromCap -- Capacity of jug from which
              water is poured
   toCap   -- Capacity of jug to which
              water is poured
   d       -- Amount to be measured */
int pour(int fromCap, int toCap, int d)
{
    int from = fromCap, to = 0;
    
    // initial fill
    int step = 1; 
    
    // Break the loop when either of the two
    // jugs has d litre water
    while (from != d && to != d)
    {
        int temp = min(from, toCap - to);

        to += temp;
        from -= temp;
        step++;

        if (from == d || to == d)
            break;

        // refill source
        if (from == 0)
        {
            from = fromCap;
            step++;
        }
        
        // empty destination
        if (to == toCap)
        {
            to = 0;
            step++;
        }
    }
    return step;
}

// Returns minimum steps required
int minSteps(int m, int n, int d)
{
    // To make sure that m is smaller than n
    if (m > n)
        swap(m, n);
    
    // If d > n, it is not possible to measure the water
    if (d > n)
        return -1;

    // If gcd of m and n does not divide d
    // then solution is not possible
    if (d % gcd(m, n) != 0)
        return -1;

    // Try both directions and take minimum:
    // 1. Pour from n to m
    // 2. Pour from m to n
    return min(pour(n, m, d), pour(m, n, d));
}
};