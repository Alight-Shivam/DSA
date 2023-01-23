int power(int x,int n){
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        res = res*x;
    }
    return res; 
}

// Time Complexity is theta(n)


// Efficient Recursive Solution

int Power(int x,int n){
    if( n == 0 ){
        return 1;
    }
    int temp = power(x,n/2);
    temp = temp*temp;
    if(n%2 == 0)
    return temp;
    else
    return temp*x;
}

// Time Complexity T(n) = T(n/2) + theta(1)


// Iterative Power Solution

// -Every number can be written as sum of power of 2(set bits in binary representation)
// -We can traverse through all bits of a number(from LSB to MSB) in O(logn) time.

int Pow(int x, int n){
    int res = 1;
    while(n>0){
        if (n%2 != 0)
        res = res*x;
        n =n/2;
    }
     return res;   
    }

// Time Complexity is O(logn) and Auxillary Space is O(1)
