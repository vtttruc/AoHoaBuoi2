#include <stdio.h>
#include <math.h>
 
int check_ChinhPhuong(int n){
    int x = sqrt(n);
    if(x*x == n)
        return n;
    return 0;
}
int demSoChinhPhuong(int n)
{
    int count = 0;
    for(int i = 1; i<= n; i++)
    {
        if(check_ChinhPhuong(i) == i)
            count++;
    }
    return count;
}
 
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int count = 0;
    count = demSoChinhPhuong(n);
    printf("\nTong so chinh phuong nho hon %d la: %d", n, count);
    printf("\nCac so chinh phuong nho hon %d\n", n);
    for(int i=1;i<n;i++){
        if(check_ChinhPhuong(i) == i){
            printf("%d  ", i);
        }
    }
    
}
