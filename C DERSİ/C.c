int main (void){
     float pi=22/7.0, r, cevre, alan;
     printf("dairenin yaricapini giriniz: " );
     scanf("%f", &r);
     alan= pi* r*r;
     cevre= 2*pi*r;
     printf(" \n\n %.2f yaricapli dairenin alani= ",r);
     printf("%.2f ve cevresi= %.2f'dir.", alan,cevre);
     



   return 0;  
}

