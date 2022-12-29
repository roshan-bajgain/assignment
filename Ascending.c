#include<stdio.h>

int main () {
    int a[10],i,j,tem;
    printf("Enter the number: ");
    for(i=0; i<10; i++) {
        scanf("%d",&a[i]); //Entering value 2,1,3,4,5
    }
    for(i=0; i<10; i++) { //i=0; i<10 true
        for(j=i+1; j<10; j++) { //j =1; j<10 true
            if(a[i] > a[j]) { //array 0 > array 1 if true then it enters inside and execute the logic
                tem = a[i]; //store value of a[i] in tem variable
                a[i] = a[j]; //store value of a[j] in a[i]
                a[j] = tem; // store value of tem in a[j]
            }
        }
    }
        printf("Enter number is: ");
        for (i = 0; i < 10; i++)
        {
            printf("%d\n", a[i]); //output will 1,2,3,4,5
        }
    return 0;
}

// note
//  for decending order we need to a[i] < a[j]) and all other are same