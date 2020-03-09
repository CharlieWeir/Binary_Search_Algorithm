#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int myAray[] = {1,2,3,4,5,6,7,8,9,10};
    int min = 0;
    int max = 9;
    int target = 10;
    bool found = false;

    while(min <= max)

    {
        int guess = (min + max)/2;

        if(myAray[guess] == target)
            {
                printf("Target found at position : %d",guess);
                found = true;
                break;
            }
        else if(myAray[guess] > target)
            {
                max = guess - 1;

            }
        else
            {
                min = guess + 1;

            }



    }

    if(found == false)
            {

                printf("Target not in array!");
            }



    return 0;
}
