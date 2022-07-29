#include<stdio.h>
#include <time.h>
#include <unistd.h>


void text_to_binary(){
    printf("----------------------------------------------\n");
    printf("|  Welcome in text to binary 5-bit version   |\n");
    printf("----------------------------------------------\n");
    printf("Type in some text\n");

    char besede[255];
    int binary[10001],b,c,d;
    fgets(besede, 254, stdin);
    while(1){
    fgets(besede, 255, stdin);
    for(int i=0;i<strlen(besede);i++){
        if(besede[i]=='a' || besede[i]=='A'){
            binary[i]=0b00001;
        }else if(besede[i]=='b' || besede[i]=='B'){
            binary[i]=0b00010;
        }else if(besede[i]=='c' || besede[i]=='C'){
            binary[i]=0b00011;
        }else if(besede[i]=='d' || besede[i]=='D'){
            binary[i]=0b00100;
        }else if(besede[i]=='e' || besede[i]=='E'){
            binary[i]=0b00101;
        }else if(besede[i]=='f' || besede[i]=='F'){
            binary[i]=0b00110;
        }else if(besede[i]=='g' || besede[i]=='G'){
            binary[i]=0b00111;
        }else if(besede[i]=='h' || besede[i]=='H'){
            binary[i]=0b01000;
        }else if(besede[i]=='i' || besede[i]=='I'){
            binary[i]=0b01001;
        }else if(besede[i]=='j' || besede[i]=='J'){
            binary[i]=0b01010;
        }else if(besede[i]=='k' || besede[i]=='K'){
            binary[i]=0b01011;
        }else if(besede[i]=='l' || besede[i]=='L'){
            binary[i]=0b01100;
        }else if(besede[i]=='m' || besede[i]=='M'){
            binary[i]=0b01101;
        }else if(besede[i]=='n' || besede[i]=='N'){
            binary[i]=0b01110;
        }else if(besede[i]=='o' || besede[i]=='O'){
            binary[i]=0b01111;
        }else if(besede[i]=='p' || besede[i]=='P'){
            binary[i]=0b10000;
        }else if(besede[i]=='r' || besede[i]=='R'){
            binary[i]=0b10001;
        }else if(besede[i]=='s' || besede[i]=='S'){
            binary[i]=0b10010;
        }else if(besede[i]=='t' || besede[i]=='T'){
            binary[i]=0b10011;
        }else if(besede[i]=='u' || besede[i]=='U'){
            binary[i]=0b10100;
        }else if(besede[i]=='v' || besede[i]=='V'){
            binary[i]=0b10101;
        }else if(besede[i]=='z' || besede[i]=='Z'){
            binary[i]=0b10110;
        }else if(besede[i]=='x' || besede[i]=='X'){
            binary[i]=0b10111;
        }else if(besede[i]=='y' || besede[i]=='Y'){
            binary[i]=0b11000;
        }else if(besede[i]=='q' || besede[i]=='Q'){
            binary[i]=0b11001;
        }
    }
        for(int i=0;i<strlen(besede);i++){
            int b,c,d,e,f,num1,num2,num3,num4,num5;
                    b=binary[i]/2;
                    if(binary[i]%2!=0){
                        num1=1;
                    }else{
                        num1=0;
                    }
                    c=b/2;
                    if(b%2!=0){
                        num2=1;
                    }else{
                        num2=0;
                    }
                    d=c/2;
                    if(c%2!=0){
                        num3=1;
                    }else{
                        num3=0;
                    }
                    e=d/2;
                    if(d%2!=0){
                        num4=1;
                    }else{
                        num4=0;
                    }
                    f=e/2;
                    if(e%2!=0){
                        num5=1;
                    }else{
                        num5=0;
                    }
            char bin[6];
                bin[0]=num5+'0';
                bin[1]=num4+'0';
                bin[2]=num3+'0';
                bin[3]=num2+'0';
                bin[4]=num1+'0';

            printf("%s,", bin);
            }
        sleep(5);
        printf("\nType in some text\n");

    }

}



void binary_to_text(){

    int x,x2,x3,x4,x5;
    int rezultat=0;
    int crke_abecede;
    char crka[255];

    printf("--------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("|  Welcome in binary to text 5-bit version, for every new letter click enter, space write like 00000 and put spaces betwen binary numbers  |\n");
    printf("--------------------------------------------------------------------------------------------------------------------------------------------\n");
    while(1){
    printf("Type in how many letters have has your code includive spaces \n");
    scanf("%d", &crke_abecede);
    printf("Now type in binary code\n");

    for(int i=0;i<crke_abecede;i++){
        scanf("%d%d%d%d%d", &x, &x2, &x3, &x4, &x5);
        rezultat=x*16+x2*8+x3*4+x4*2+x5*1;

             if(rezultat==0){
                crka[i]='\40';
            }else if(rezultat==1){
                crka[i]='a';
            }else if(rezultat==2){
                crka[i]='b';
            }else if(rezultat==3){
                crka[i]='c';
            }else if(rezultat==4){
                crka[i]='d';
            }else if(rezultat==5){
                crka[i]='e';
            }else if(rezultat==6){
                crka[i]='f';
            }else if(rezultat==7){
                crka[i]='g';
            }else if(rezultat==8){
                crka[i]='h';
            }else if(rezultat==9){
                crka[i]='i';
            }else if(rezultat==10){
                crka[i]='j';
            }else if(rezultat==11){
                crka[i]='k';
            }else if(rezultat==12){
                crka[i]='l';
            }else if(rezultat==13){
                crka[i]='m';
            }else if(rezultat==14){
                crka[i]='n';
            }else if(rezultat==15){
                crka[i]='o';
            }else if(rezultat==16){
                crka[i]='p';
            }else if(rezultat==17){
                crka[i]='r';
            }else if(rezultat==18){
                crka[i]='s';
            }else if(rezultat==19){
                crka[i]='t';
            }else if(rezultat==20){
                crka[i]='u';
            }else if(rezultat==21){
                crka[i]='v';
            }else if(rezultat==22){
                crka[i]='z';
            }else if(rezultat==23){
                crka[i]='x';
            }else if(rezultat==24){
                crka[i]='y';
            }else if(rezultat==25){
                crka[i]='q';
            }
    }
        printf("Your word is: %s\n", crka );
        sleep(5);
        system("CLS");
    }

}

int main(){
    int a,b,c;
    printf("---------------------------------------\n");
    printf("|  Welcome to 5-bit binary converter  |\n");
    printf("---------------------------------------\n");
    printf("Type 1 for text --> binary     ");
    printf("Type 2 for binary --> text\n");
    scanf("%d", &a);
      while(a!=1&&a!=2){
        printf("Wrong number, Try again\n");
            scanf("%d", &a);
      }
        if(a==1){
            system("CLS");
            sleep(0.5);
            text_to_binary();
        }else if(a==2){
            system("CLS");
            sleep(0.5);
            binary_to_text();
        }





    return 0;
}




/*
00001=1=a
00010=2=b
00011=3=c
00100=4=d
00101=5=e
00110=6=f
00111=7=g
01000=8=h
01001=9=i
01010=10=j
01011=11=k
01100=12=l
01101=13=m
01110=14=n
01111=15=o
10000=16=p
10001=17=r
10010=18=s
10011=19=t
10100=20=u
10101=21=v
10110=22=z
10111=23=x
11000=24=y
11001=25=q
11010=26=
11011=27=
11100=28=
11101=29=
11110=30=
11111=31=
*/

