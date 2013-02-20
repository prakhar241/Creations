#include<stdio.h>
float power(int x, int n)
{// printf("x=%d n=%d\n",x,n);
    if(n==0) return 1;
    if(n<0) return 1.0/power(x,-n);
    if(n==1) return x;
    if(n%2) return x*power(x*x,(n-1)/2);
    else return power(x*x,n/2);
}

float power1(int x, int n)
{   if(n==0) return 1;
    if(n<0) return 1.0/power1(x,-n);
    if(n==1) return x;
    return x*power1(x,n-1);
}

int myatoi(char s[])
{ int r=0,i=0;
if(*(s+i)=='-') return -1*myatoi((s+1));
    while(*(s+i))
    {
        r = (10*r) + (*(s+i)-'0');
        i++;
    }
    return r;
}

//int main(int argc, char *argv[])
int main()
{ int a=10,b=10;
//    scanf("%d %d", &a, &b);
    printf("%f\n", power( myatoi(argv[1]), myatoi(argv[2]) ) );
    printf("%f\n", power1( myatoi(argv[1]), myatoi(argv[2]) ) );
    //printf("%f", power1(a,b));
    //printf("%f", power(a,b));
    return 0;
}
