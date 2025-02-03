#include <stdio.h>

int main(){

    char name[9] = {
        'C', 'H', 'I', 'B', 'U', 'N', 'D', 'U','M'
    };

    int rowMatrix[4] =  {2,5,6,6};
    int ColumMatrix[2][2]= {
        {1,2},
        {2,4}
    };
    printf("%s", name);
    printf("%i",ColumMatrix[1][1]);

    return 0;
}