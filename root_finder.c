#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    double d=(double)b*b-4.0*a*c;
    if(d > 0.0){
        double r1=(-b+sqrt(d))/(2.0*a);
        double r2=(-b-sqrt(d))/(2.0*a);
        if(r1<r2)
            printf("%.2f\n%.2f\n",r1,r2);
        else
            printf("%.2f\n%.2f\n",r2,r1);
    }
    else if(d==0.0) {
        double r=-b/(2.0*a);
        printf("%.2f\n",r);
    }
    else {
        double r=-b/(2.0*a);
        double i=sqrt(-d)/(2.0*a);
        printf("%.2f + %.2fi\n",r,i);
        printf("%.2f - %.2fi\n",r,i);
    }

    return 0;
}