#include<stdio.h>

int main()
{
    int a[10][10],m,n;
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    for(int i=0;i<m;i++) {
        printf("Enter elements in %d row:\n",i+1);
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("The matrix is:\n");
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++)
            printf("\t%d",a[i][j]);
        printf("\n");
    }
    for(int i=1;i<((m>n)?m:n);i++)
        for(int j=0;j<i/2+1;j++) {
            a[i][j]+=a[j][i];
            a[j][i]=a[i][j]-a[j][i];
            a[i][j]-=a[j][i];
        }
    printf("The transpose of the matrix is:\n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
            printf("\t%d",a[i][j]);
        printf("\n");
    }
}