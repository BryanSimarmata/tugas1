#include <stdio.h>
int main(){
 

    char ips_1 [] = "3.1";
    char ips_2 [] = "3.2";
    char ips_3 [] = "3.7";
    char ips_4 [] = "3.2";
    char ips_5 [] = "3.7";

    double rata_rata;
    rata_rata =(3.9 + 3.4 + 3.5 + 3.2 + 3.7) / 5.0;

    printf ("Bryan lefrans simarmata\n");
    printf ("202355200006\n");
    printf ("Teknik Informatika\n");
 
    printf ("___________________________________________\n");
    printf ("||    NIM    || NAMA      ||  Nilai  ||IPS \n");
    printf ("||20235520567||Bryan      ||       81||%s\n",ips_1);
    printf ("||20235520689||Lea        ||       72||%s\n",ips_2);
    printf ("||20235520642||Frans      ||       63||%s\n",ips_3);
    printf ("||23235520457||Simar      ||       84||%s\n",ips_4);
    printf ("||20235520357||Mata       ||       95||%s\n",ips_5);
    printf ("___________Rata - rata IPS_________||%.2f\n", rata_rata);


    return 0;
}