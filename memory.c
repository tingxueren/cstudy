#include <stdio.h>
#include <iomanip.h>

void main(void)

{

    float *p = NULL;

    while(TRUE)

    {

        p = new float[1000000];

        cout << “eat memory” << endl;

        if(p==NULL)

            exit(1);

    }

}
