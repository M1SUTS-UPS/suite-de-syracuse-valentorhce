# include <stdlib.h>
# include <stdio.h>
# include <math.h>
# define N 1000000
/*BOUCHET Valentin*/ 
/*    22101550    */
void func(long u0);

int main()
{
long u0;
long u[N];
long i,key;
FILE *fichier;
printf("Choisissez une valeur de u0 > 1, le terme initial: u0 = ");
scanf("%ld",&u0);
printf("\n");
fichier = fopen("Syracuse.txt","w");

u[0] = u0;
i=0;
key = 0;


while (key!=2)
{
 if ((u[i]%2)==0)
 {
  u[i+1] = u[i]/2;
 }
 else
 {
  u[i+1] = 3*u[i]+1;
 }

 if ((u[i+1]==1)&&(key==0))
 {
 key = 2;
 }
 printf("Terme %ld, u(%ld) = %ld\n",i+1,i+1,u[i+1]);
 fprintf(fichier,"%ld %ld\n",i+1,u[i+1]);
 i = i + 1;
}
printf("\n Il existe un rang p = %ld, tel que u(p) = 1\n",i);
fclose(fichier);
return 0;
}


void func(long u0)
{
long l=0;
long u1;
while (l!=2)
{
 if ((u0%2)==0)
 {
  u1 = u0/2;
 }
 else
 {
  u1 = 3*u0+1;
 }

 if ((u1==1)&&(l==0))
 {
 l = 2;
 }
 u0 = u1;
}
}
