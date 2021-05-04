//TOHU SPOJ : Fayha Syifa Qalbi
#include<stdio.h>

int main()
{
    int T, r;
    scanf("%d",&T);

    for(r=0; r<T; r++)
    {
        long N;
        double jawabtohu;
        scanf("%ld",&N);
            jawabtohu=(0.5*(1.0/6-1.0/(N+1)+1.0/(N+2))+2.0/3.0);
	//jawab=(0.5/(N+2))+(3/4)-(0.5/(n+1));
            printf("%.11lf\n",jawabtohu);
    }   

    return 0;
}
