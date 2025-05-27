#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <windows.h>
#include <stdbool.h>
long long int conversie_in_baza10(long long int n, int baza_n);
void maxim_in_baza10(long long int x, int b1, long long int y, int b2);
long long int conversie_din_baza10(long long int n, int baza_x);
void cif_bin(long long int n);
void conversie_din_baza_x_in_baza_y(char s[], int bd, int bc);
void salvareInFisier(long long int n, long long int v[]);
int cif_max(long long int x);
int baza_minima(long long int n);
long long int sum_baza10(long long int n, int b);
int main(){
 long long int opt;
 bool ok;
 do {
    system("cls");
    printf("1. Transformarea unui numar dintr_o baza x (2<=x<=9) in baza 10\n");
    printf("2. Se citesc doua numere naturale x scris in baza b1 si y in baza b2.\n");
    printf("Sa se scrie un program care afiseaza numarul mai mare in reprezentarea in baza 10 sau mesajul Numerele sunt egale.\n");
    printf("3. Transformarea unui numar din baza 10 intr-o baza x (2<=x<=9)\n");
    printf("4. Sa se determine cate cifre 0 si cate cifre 1 are reprezentarea in baza 2 a unui numar n.\n");
    printf("5. Transformarea unui numar dintr_o baza x intr-o baza y\n");
    printf("6. Probleme cu baze de numeratie asupra unui tablou unidimesional\n");
    printf("7. Exit\n");
    printf("\n\nAlegeti o optiune:");  scanf("%d",&opt);
    switch(opt) {
    case 1:
       system("cls");
       printf("Optiunea aleasa de dumneavostra este 1\n");
       printf("Apasati tasta 1 daca doriti sa continuati sau tasta 0 daca v-ati razgandit si vreti sa reveniti la meniul principal\n");
       scanf("%d", &ok);
       if(ok==1){
            system("cls");
            long long int n; int baza_n;
            printf("Introduceti numarul:");
            scanf("%d", &n);
            printf("Introduceti baza initiala a numarului %d:", n);
            scanf("%d", &baza_n);
            printf("Numarul %lld, in baza 10, este egal cu:%lld\n\n",n, conversie_in_baza10(n, baza_n));
            system("pause");
       }
       else
        getchar();
       break;
    case 2:
       system("cls");
       printf("Optiunea aleasa de dumneavostra este 2.\n");
       printf("Apasati tasta 1 daca doriti sa continuati sau tasta 0 daca v-ati razgandit si vreti sa reveniti la meniul principal\n");
       scanf("%d", &ok);
       if(ok == 1){
          system("cls");
          long long int x, y; int b1, b2;
          printf("Introduceti primul numar:");  scanf("%lld", &x);
          printf("Introduceti baza numarului %d:", x); scanf("%d", &b1);
          printf("Introduceti al doilea numar:");  scanf("%lld", &y);
          printf("Introduceti baza numarului %d:", y); scanf("%d", &b2);
          printf("\n\n");
          maxim_in_baza10(x, b1, y, b2);
          printf("\n\n");
         system("pause");
       }
       else
         getchar();
       break;
    case 3:
       system("cls");
       printf("Optiunea aleasa de dumneavostra este 3.\n");
       printf("Apasati tasta 1 daca doriti sa continuati sau tasta 0 daca v-ati razgandit si vreti sa reveniti la meniul principal\n");
       scanf("%d", &ok);
       if(ok==1){
            system("cls");
            long long int n; int baza_n;
            printf("Introduceti numarul:");
            scanf("%lld", &n);
            printf("Introduceti baza in care doriti sa fie convertit numarul %d:", n);
            scanf("%d", &baza_n);
            printf("Numarul %lld, in baza %d, este egal cu:%lld\n\n",n, baza_n, conversie_din_baza10(n, baza_n));
            system("pause");
       }
       else
         getchar();
       break;
    case 4:
       system("cls");
       printf("Optiunea aleasa de dumneavostra este 4.\n");
       printf("Apasati tasta 1 daca doriti sa continuati sau tasta 0 daca v-ati razgandit si vreti sa reveniti la meniul principal\n");
       scanf("%d", &ok);
       if(ok==1){
            system("cls");
            long long int n;
            printf("Introduceti numarul:");
            scanf("%lld", &n);
            cif_bin(n);
            printf("\n\n");
            system("pause");
       }
       else
         getchar();
       break;
    case 5:
       system("cls");
       printf("Optiunea aleasa de dumneavostra este 5.\n");
       printf("Apasati tasta 1 daca doriti sa continuati sau tasta 0 daca v-ati razgandit si vreti sa reveniti la meniul principal\n");
       scanf("%d", &ok);
       if(ok == 1){
            system("cls");
            char s[30];
            int bd, bc;
            printf("Introduceti numarul:"); getchar();
            gets(s);
            printf("\nIntroduceti baza initiala a numarului:");
            scanf("%d", &bd);
            printf("\nIntroduceti baza in care doriti sa fie convertit numarul:");
            scanf("%d", &bc);
            printf("\n");
            printf("Numarul %s in baza %d este egal cu:", s, bc);
            conversie_din_baza_x_in_baza_y(s, bd, bc);
            printf("\n\n");
            system("pause");
       }
       else
         getchar();
       break;
    case 6:
       system("cls");
       printf("Optiunea aleasa de dumneavostra este 6.\n");
       printf("Apasati tasta 1 daca doriti sa continuati sau tasta 0 daca v-ati razgandit si vreti sa reveniti la meniul principal\n");
       scanf("%d", &ok);
       if(ok == 1){
           system("cls");
           long long int n, x, v[199];
           int b;
           printf("Introduceti numarul elementelor din tablou:"); scanf("%lld", &n);
           printf("Introduceti cele %lld elemente:\n", n);
           for(int i=1; i <= n; i++)
                  scanf("%lld", &v[i]);
           printf("Elementele tabloului vor fi salvate intr-un fisier pentru o siguranta suplimentara");
           sleep(5);
           int sec = 5;
           while(sec){
              system("cls");
              printf("Procesul va fi gata in:");
              printf("%d secunde", sec);
              fflush(stdout);
              sleep(1);
              sec--;
           }
           salvareInFisier(n, v);
           system("cls");
           printf("\nElementele au fost salvate cu succes in fisier\n\n");
           sleep(3);
           system("cls");
           printf("Va rugam sa alegeti din lista de mai jos enuntul dorit:\n\n");
           printf("1. Determinati cea mai mica baza de numeratie b in care ar putea fi considerate numerele introduse.\n");
           printf("2. Sa se scrie un program care stabileste care dintre cele n numere sunt scrise in baza x si calculeaza suma acestora in baza 10.\n");
           int opt1;
           printf("\n\nAlegeti o optiune:");  scanf("%d",&opt1);
           switch(opt1){
           case 1:
               printf("Cea mai mica baza de numeratie in care ar putea fi considerate numerele introduse este:%d\n", baza_minima(n));
               system("pause");
               break;
           case 2:
               printf("Introduceti baza dupa care se vor cauta numerele:"); scanf("%d", &b);
               printf("Suma in baza 10, a numerele scrise in baza %d este %lld\n", b, sum_baza10(n, b));
               system("pause");
               break;

           }
       }
       else
         getchar();
       break;
    case 7:
       exit(0);
    default:
       printf("\nOptiune invalida!\n");
       system("pause");
    }
  } while(1);
 return 0;
}
long long int conversie_in_baza10(long long int n, int baza_n){
    long long int nr=0, p=1;
    int u;
    while(n){
        u = n%10;
        nr = nr+u*p;
        p=p*baza_n;
        n/=10;
    }
    return nr;
}
void maxim_in_baza10(long long int x, int b1, long long int y, int b2){
    long long int nr1, nr2 ,x1, y1;
    x1 = x;
    y1 = y;
    nr1 = conversie_in_baza10(x1, b1);
    nr2 = conversie_in_baza10(y1, b2);
    if(nr1>nr2)
        printf("Numarul mai mare este %d", x);
    else if(nr2>nr1)
        printf("Numarul mai mare este %d", y);
    else
        printf("Numerele sunt egale");
}
long long int conversie_din_baza10(long long int n, int baza_n){
    long long int nr=0, p=1, r;
    while(n){
        r = n%baza_n;
        nr = r*p+nr;
        p*=10;
        n/=baza_n;
    }
    return nr;
}
void cif_bin(long long int n){
    long long int  nr=0, r;
    int cif0=0, cif1=0;
    while(n){
        r = n%2;
        if(r==1)
            cif1++;
        else
            cif0++;
        n/=2;
    }
    printf("Numarul cifrelor de 0 este %d, iar numarul cifrelor de 1 este %d", cif0, cif1);
}
void salvareInFisier(long long int n, long long int v[]){
    FILE *f;
    f = fopen("fisier.in", "w");
    for(int i=1; i <= n; i++)
              fprintf(f, "%lld\n", v[i]);
    fclose(f);
}
int baza_minima(long long int n){
    FILE *f;
    f = fopen("fisier.in", "r");
    int i, c, max=-1;
    long long int x;
    for(i = 1; i <= n; i++){
        fscanf(f, "%lld", &x);

       c = cif_max(x);
        if(c > max)
            max = c;
    }
    return max+1;
}
int cif_max(long long int x){
    int max = -1;
    while(x){
        if(x%10 > max)
            max = x%10;
        x/=10;
    }
    return max;
}
long long int sum_baza10(long long int n, int b){
    FILE *f;
    f = fopen("fisier.in", "r");
    int i, c;
    long long int x, s=0;
    for(i = 1; i <= n; i++){
        fscanf(f, "%lld", &x);

        c = cif_max(x);
        if(c < b)
           s+=conversie_in_baza10(x, b);
    }
    return s;
}
void conversie_din_baza_x_in_baza_y(char s[], int bd, int bc){
    int k, b, l=1, i, c, j=0, nr=0, p=1, r;
    int rez[30];
    if(bd==2)
        k = log2(bc);
    if(bd==2&&pow(2, k) == bc){

        for(i=strlen(s)-1; i>=0; i--)
        {
            c = s[i]-'0';
            j++;
            if(j<=k)
            {
                nr = c*p+nr;
                p=p*10;
            }
            else
            {
                rez[l++]= conversie_in_baza10(nr, 2);
                p=1;
                nr=0;
                nr = c*p+nr;
                p=p*10;
                j=1;

            }
        }
        rez[l++]= conversie_in_baza10(nr, 2);
    }
    else{
        for(i=strlen(s)-1; i>=0; i--){
            c = s[i]-'0';
            nr = nr+c*p;
            p=p*bd;
        }
         while(nr){
        r = nr%bc;
        rez[l++]=r;
        nr/=bc;
    }
    }

    for(i=l-1; i>=1; i--){
        nr = abs(rez[i]);
        if(nr<10)
           printf("%d", nr);
        else
           printf("%c", nr+55);
    }
}
