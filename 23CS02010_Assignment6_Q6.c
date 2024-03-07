#include<stdio.h>

int a[10][7],m;

void takeinput() {
    for(int i=0;i<m;i++) {
        printf("Enter the temperature of %dth city:\n",i+1);
        for(int j=0;j<7;j++)
            scanf("%d",&a[i][j]);
    }
}

void calculate_avg() {
    printf("The avg temperatures are: ");
    float temp,sum;
    for(int i=0;i<m;i++){
        sum=0; 
        for(int j=0;j<7;j++)
            sum+=a[i][j];
        temp=(float)sum/7.0;
        printf("%.2f\t",temp);
        }
}

int main()
{
    printf("Enter the number of cities: ");
    scanf("%d",&m);
    takeinput();
    calculate_avg();
    return 0;
}