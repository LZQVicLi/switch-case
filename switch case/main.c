//
//  main.c
//  switch case
//
//  Created by xalo on 15/7/27.
//  Copyright (c) 2015年 xalo. All rights reserved.
//

#include <stdio.h>



    int main(int argc, const char * argv[]) {
        //    int a = (arc4random()%41+20);
        int a = 0;
        printf("请输入一个数字(1-7)");
        scanf("%d",&a);
        switch (a) {
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("\nTuesday");
                break;
            case 3:
                printf("\nWedensday");
                break;
            case 4:
                printf("\nThursday");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Satuiday\n");
                break;
            case 7:
                printf("\nSunday");
                break;
                
            default:
                break;
        }
        
        
    }


