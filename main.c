#include <stdio.h>
#include "lr.h"
int main(){
    int choise,p;
    printf("Vvedite nomer labu\n");
    scanf("%d", &choise);
    switch(choise){
    case(1):printf("1 laba bez dop zadania 1, dop zadanie 2\n");scanf("%d", &p);if(p==1){ lab1();break;}else{dop1(); break;}
    case(2): printf("2 laba bez dop zadania 1, dop zadanie 2\n");scanf("%d", &p);if(p==1){ lab2();break;}else{dop2(); break;}
    case(3): lab3();break;
    case(4): printf("4 laba bez dop zadania 1, dop zadanie 2\n");scanf("%d", &p);if(p==1){ lab4();break;}else{dop4(); break;}
    case(5): printf("5 laba bez dop zadania 1, dop zadanie 2\n");scanf("%d", &p);if(p==1){ lab5();break;}else{dop5(); break;}
    case(6): printf("6 laba bez dop zadania 1, dop zadanie 2\n");scanf("%d", &p);if(p==1){ lab6();break;}else{dop6(); break;}
    case(7): lab7();break;
        }
        printf("\n");
        system("pause");
return 0;
}

