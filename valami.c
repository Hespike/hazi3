#include <stdio.h>
#include <stdlib.h>

int main(){
    char bemenet[100] = "Hello, pelda vagyok";
    char kimenet[] = "";
    char str[20];
    int i, k;
    int j = 0;
    int szamok = 0;
    int szamlalo = 0;
    int szobetu = 0;
    char rev[100];

    //Elkezdem kiszámolni a szavak hosszát
    for (i = 0; bemenet[i]; ++i);

    for(k=0; k< i-1; k++) {                                 
        if (bemenet[k] == ' ') {
            szamlalo++;
            printf("%d", szobetu);
            szobetu = 0;
        }
        else{
            szobetu++;
        }
    }
    printf("%d", szobetu);              
//megvan a szavak hossza

// vissafelé kiíratás

while (bemenet[i] != '\0'); {
for (i = j; bemenet[i] != ' '; ++i);    
    for (j = j+1; i-- > 0; ++j) {     
        rev[j] = bemenet[i];          
    }                           

}


printf("%s", rev);

return 0;
}