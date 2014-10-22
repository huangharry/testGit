//
//  main.c
//  410226270_hw3
//
//  Created by Harry on 2014/10/13.
//  Copyright (c) 2014年 huangharry. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define alength 10
int main(int argc, const char * argv[]) {
    // insert code here...
    int a[] = {1, 5, 3, 9, 6, 7, 4, 12, 15, 8};
    int i,j,swap;
    
    for(i=0;i<alength;i++){
        for(j=0;j<=i-1;j++){
            if(a[j+1]<a[j]){
                swap = a[j];
                a[j] = a[j + 1];
                a[j + 1] = swap;
            }
        }
    }
    printf("a[i]={");
    for (i=0;i<alength;i++){
        printf("%d,", a[i]);
    }
    printf("}");
    system("pause");
}
