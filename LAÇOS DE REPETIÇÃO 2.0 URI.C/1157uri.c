#include <stdio.h>
 
int main() {
    int n, i = 1;

    scanf("%d", &n);

    while(i <= n){
        if(n % i == 0){
            printf("%d\n", i);
        }

        i += 1;
      
    }

    return 0;
}