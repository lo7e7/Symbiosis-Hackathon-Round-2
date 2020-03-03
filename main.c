#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void DecryptFile(void);
void DecryptText(void);
void EncrypterFile(void);
void EncrypterTexxt(void);

int main(){
     printf("\n\twhat action would you like to perform?\n");
printf("\n\t1.decryptFile \n\t2.encryptFile \n\t3.decryptText \n\t4.encryptText \n");
int i;
scanf("%d",&i);
if(i==1){
        system("cls");
        DecryptFile();
}
if(i==2)
         EncrypterFile();
else if(i==3)
     DecryptText();
 else if(i==4)
     EncrypterTexxt();
else
    printf("\n\tinvalid action");
}
