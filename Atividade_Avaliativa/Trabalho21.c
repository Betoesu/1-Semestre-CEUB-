#include <stdio.h>//Pedro Carolino Barreto Sarmento   RA:22501994

int main(){
int n;
scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                printf("1");
            else if (i + j == n - 1)
                printf("2");
            else
                printf("3");
        }
        printf("\n");
    }
}
