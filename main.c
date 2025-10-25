#include "macro.h"

int main(){

    int n = 5;
    int n2[5] = {1,2,3,4,5};

    print("%d", n);

    repeat(n,
        print("Juninho");
    )

    print("%d",arrSize(n2));

    print("%d",index(n2,4));


    
    return 0;
}