#include <stdio.h>
 
int hammingDistance(int n1, int n2)
{
    int x = n1 ^ n2;
    int distance = 0;
 
    while (x > 0) {
        distance += x & 1;
        x >>= 1;
    }
 
    return distance;
}
 
int main()
{
    int x = 0;
    while (x != -1) {
        int n1, n2;
        scanf("%d %d", &n1, &n2);
        if (n1 == -1){
            return 0;
        }
        printf("%d\n", hammingDistance(n1, n2));
        
    }

   
 }
