#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define C 6
#define R 6

int main(){
    int arr[R][C];
    int max_sum = INT_MIN;
    int i, j;
    
    for(i = 0; i < R; i++){
       for(j = 0; j < C; j++){
          scanf("%d",&arr[i][j]);
       }
    }
    
    for (i = 0; i < R-2; i++){
        for (j = 0; j < C-2; j++){
            // hourglass structure 
            int current = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            if (current > max_sum) {
                max_sum = current;
            }
        }
    }
    printf("%d\n", max_sum);
    return 0;
}
