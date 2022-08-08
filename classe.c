#include <stdio.h>

int main() {
   float C1[13];
   float C2[15];
   float T[28];
   float N,M,MAX,MIN;
   int i,x,j,tmp;
   printf("Les moyennes  de la classe 1: \n",N);
   scanf("%f",&N);
   for (i=0;i<13;i++){
       scanf("%f",&C1[i]);
   }
   MAX=C1[0];
   for (i=0;i<13;i++){
     if (C1[i]>MAX){
         MAX=C1[i];
     }

      }
   printf("la plus grande moyenne est : %f \n  " , MAX);

  MIN =C1[0];
  for (i=0;i<13;i++){
    if (C1[i]<MIN){
        MIN=C1[i];
    }
  }
   printf("la plus petit moyenne est : %f \n " ,MIN);
   x=0;
   for (i=0; i < 13; i++){
    if (C1[i]>= 10){
       x=x+1 ;
    }
   }
   printf("le nombres des moyennes > = 10 : %d",x);


   printf("\n");


   printf(" \n Les moyennes de la classe 2: \n",M);
   scanf("%f",&M);
   for (i=0;i<15;i++){
       scanf("%f",&C2[i]);
   }

     MAX=C2[0];
   for (i=0;i<15;i++){
     if (C2[i]>MAX){
        MAX=C2[i];
     }
      }
  printf("la plus grande moyenne est : %f \n " ,MAX);

  MIN =C2[0];
  for (i=0;i<15;i++){
    if (C2[i]<MIN){
        MIN=C2[i];
    }
  }
   printf("la plus petit moyenne est : %f \n  " ,MIN);

  x=0;
   for (i=0; i < 15; i++){
    if (C2[i]>= 10){
       x=x+1 ;
    }
   }
   printf("le nombres des moyennes > = 10 : %d",x);
   printf("\n");


   for (i = 0; i< 13; i++){
    T[i]=C1[i];
   }
   for (i = 0; i<15; i++){
    T[13+i]=C2[i];
   }

   for(i = 0, j = 13; j < 28 && i < 15; i++, j++){
     T[j] = C2[i];
   }
  printf("les moyennes des deux classes: \n");
  for (i=0; i< 28; i++)
    {
    printf("%f\n",T[i]);
  }
  for (i=0 ; i<27; i++){
      for (j=i+1; j<28;j++){
            if (T[i]>T[j]){
                tmp=T[i];
                T[i]=T[j];
                T[j]=tmp;
             }
            }
          }


        printf("\n tableau des moyennes en ordre : \n  ");
        for (i=0; i<28;i++){
        printf("%f\t",T[i]);

}

    return 0;
}
