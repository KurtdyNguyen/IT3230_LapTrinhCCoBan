#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<limits.h>

typedef struct Computer{
    enum CPU{i3, i5, i7};
    enum RAM{r1 = 1, r2 = 2, r4 = 4, r8 = 8, r16 = 16, r32 = 32};
} Computer;

int menu(){
    long c;
    char str[10], *ptr;

    printf("\n\t\t====Program for management computers====");
    printf("\n\t\t\t\t***");
    printf("\n\t1) Load Data Files:");
    printf("\n\t2) Update CPU info:");
    printf("\n\t3) Update Ram info:");
    printf("\n\t4) Search:");
    printf("\n\t5) QuitSV");
    do{
        printf("\n\tEnter the task you want to perform: ");
        if(!fgets(str, 10, stdin)){
            printf("\t Wrong input! Please enter number again.");
            continue;
        }
        errno = 0;
        c = strtol(str, &ptr, 10);
        if(errno == ERANGE || str == ptr || c > INT_MAX || c < INT_MIN){
            printf("\t Wrong input! Please enter number again.");
            continue;
        }
        if(c >= 1 && c <= 5){
            break;
        }
        printf("\t Wrong input! Please enter number again.");
    }while(1);
    return c;
}

void loadFile(char filename[]){
    FILE* fp = fopen(filename, "r");
    
}

int main()
{
    int c = menu();
    char filename[] = "txtFile/ComputerFileManagement.txt";

    switch (c)
    {
    case 1:
        loadFile(filename);
        break;
    case 2:
        printf("2");
        break;
    case 3:
        printf("3");
        break;
    case 4:
        printf("4");
        break;
    case 5:
        printf("\n\tThank you for using this program. Goodbye and see you again!");
    }
    return 0;
}
