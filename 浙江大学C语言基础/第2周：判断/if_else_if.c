#include <stdio.h>

int main()
{
    int x, f;

    if(x < 0){
        f = -1;
        }else if(x == 0){
            f = 0;
    }else{
        f = 2 * x;
        }
        
    printf("f是%d\n", f);
    return 0;
}