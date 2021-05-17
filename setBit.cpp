int setBit(int n, int k) 
{ 

    return (n | (1 << (k - 1))); 
}

int main() 
{ 
    int n = 5, k = 1; 
    printf("%d with %d-th bit Set: %d\n", 
           n, k, setBit(n, k));
}