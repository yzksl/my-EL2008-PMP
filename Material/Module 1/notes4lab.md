When wrting code, maybe try to segmentate parts of the code to the processes and other blocks that represent the DFD and/or flowchart. E.g.:  
```C
#include <stdio.h>
#define KMS_PER_MILE 1.609

int main(void) {
    double miles, /*distance in miles*/
    kms         ; /*equivalent distance in km*/

    /*Get distance in miles (USER-A)*/
    /*Input operation: instruction that copies data from an input device into memory*/
    printf("Enter the distance in miles: ");
    /*Output operation: instruction that copies data from memory and show in output device*/
    scanf("%lf", &miles);

    /*Convert the distance to km (B)*/
    kms = KMS_PER_MILE * miles;

    /*Menampilkan data*/
    printf("%lf", miles);

    return 0;
}
```
> [!NOTE]
> The above example uses kinda bad comments.
> Try to make them short.

