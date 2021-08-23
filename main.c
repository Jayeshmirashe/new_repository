/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int minMax(int a[],int size,int *min,int *max){
   int i;
    *min=*max=a[0];
    for(i=1;i<size;i++){
        if(a[i]<*min)
        *min=a[i];
        if(a[i]>*max)
        *max=a[i];
    }
}
int main()
{
    int min,max,size;
   int a[]={4,5,6,8,89,120,34,1};
   size=sizeof(a)/sizeof(a[0]);
   minMax(a,size,&min,&max);
   printf("min value %d\n max value %d",min,max);

    return 0;
}

