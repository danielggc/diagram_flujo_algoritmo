#include <cstdio>
int main(){
    
    int BC =0 , BV =0,  BD =0, BC2= 0 , BM=0 ; 
    int N;
    scanf("%d",&N);
    int C = N;
    if( N >= 50000 ) {
        BC = BC +1;
        C = C -50000;
    }
    else if ( N >= 20000 ) {
        BV = BV+1;
        C -= 20000 ;
    }
    else if ( N >= 10000 ) {
        BD = BD+1;
        C -= 10000 ;
    }
    else if ( N >= 5000 ) {
        BC2 = BC2+1;
        C -= 5000 ;
    }
    else if ( N >= 1000 ) {
        BM = BM+1;
        C -= 1000 ;
    }

    int Resto = C;
    printf(" %d, %d, %d, %d, %d , %d  %d", N ,BC,BV,BD,BC2,BM,Resto);
    
}

