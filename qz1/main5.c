#include <studio.h>

int mian(){
    int n=7;
    int ciunt=0;
    while (n){
        if(n&1){
            count++;
        }
        n>>=1;
    }
    printf("%d\n",count);
    return 0;
}