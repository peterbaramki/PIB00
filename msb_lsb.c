#include <stdio.h>

int msb (int n) {
    
    if (n == 0)
        return 0;
        
    int position = 0;
    int msb = 0;
    
    while (n != 0) 
    {
        if (n % 2 == 1)
            msb = position;
            
        n /= 2;
        position++;
    }
    
    return msb;
}

int lsb (int n) {
    
    if (n == 0)
        return 0;
        
    int lsb = 0;
    
    while (n != 0) 
    {
        if (n % 2 == 1)
            return lsb;
            
        n /= 2;
        lsb++;
    }
}

int main() {
    int x;
    scanf("%d", &x);
    int n = msb(x);
    int m = lsb(x);
    int dif = n - m;
    printf("%d", dif);
    return 0;
}
