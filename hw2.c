//
// Created by rell on 07/03/2024.
//
#include <stdio.h>
#include <stdlib.h>


int main() {
        int size ;
        scanf("%d", &size);
        double *arr = (double*)malloc(size * sizeof(double));
        double min= __DBL_MAX__, input;
        for(int i =0 ; i < size ; i++){
            int scanSuccess = scanf("%lf",&input);
            if(scanSuccess!=1 || input<0)
            {
                size= i;
                break;
            }
            arr[i]=input;
            if(input<min){
                min=input;
            }
        }
        for (int i=0; i<size; i++)
        {
            printf("%lf ",arr[i]);
        }
        printf("\n%lf", min);
        return 0;


}