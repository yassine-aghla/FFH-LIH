 #include <stdio.h>
 #include <stdlib.h>
struct adress {
    char adress[100] ;
    char ville [100];
    char pays [100];
    int code_postal;

};typedef struct adress adress;
struct date {
    int j;
    char m[100] ;
    int a;
};typedef struct date date;
struct person {
    char nom[100] ;
   struct date date;
   struct adress adress;
    char password [100];
};

int main() {
    // Write C code herede person
    int n;
    struct person t[100] ;
     printf("entre le nombre de person ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("entrer votre nom  \n");
    fflush(stdin);
    gets(t[i].nom);
    printf("entre votre date de naissaince  ");
    printf("le jour\n");
    scanf("%d",&t[i].date.j);
     printf("le mois\n");
     fflush(stdin);
    gets(t[i].date.m);
    printf("lanne\n");
    scanf("%d",&t[i].date.a);
    printf("entre votre adresse \n ");
   printf("ladresse \n");
   fflush(stdin);
    gets(t[i].adress.adress);
      printf("la ville \n");
      fflush(stdin);
   gets(t[i].adress.ville);
     printf("pays \n");
     fflush(stdin);
    gets(t[i].adress.pays);
     printf("code postal \n");
    scanf("%d",&t[i].adress.code_postal);
    printf("votre nom est %s , tu as ne le %d %s %d ladress est %s a %s dans le %s et le code postal  %d \n",t[i].nom,t[i].date.j,t[i].date.m,t[i].date.a,t[i].adress.adress,t[i].adress.ville,t[i].adress.pays,t[i].adress.code_postal);





}
    return 0;
}
