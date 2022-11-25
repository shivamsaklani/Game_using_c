#include<stdio.h>
#include<conio.h>
float ch1;
int scr;
int q1();
int q2();
int q3();
int q4();
int q5();
int q6();
int q7();
int q8();
int q9();
int q10();
int main(){
do
{
printf("This is General knowdelge game\n do you want to play??\n");
printf("Enter 1 for yes and 2 for no\n");
scanf("%f",&ch1);
if(ch1==1.0){
q1();
q2();
q3();
q4();
q5();
q6();
q7();
q8();
q9();
q10();
printf("your final score is %d\n",scr);
}
else{
printf("Thank you for using this app\n");} }
while(ch1==1);
return 0;
}

int q1(){
int ch1;
printf(" India s largest museum is located at\n 1) Kolkata 2) Chennai 3) Bengaluru 4) Delhi\n");
scanf("%d",&ch1);
switch(ch1){
case 2:printf("wrong answer try again. :(\n");
break;
case 1:printf("You are right :)\n");
scr++;
break;
case 3:printf("wrong answer try again. :(\n");
break;
case 4:printf("wrong answer try again. :(\n");
break;
default:printf("wrong answer try again. :(\n");
break;
}


}

int q2(){
int ch1;
printf("Which of the following scientists was associated with the first nuclear explosion in Pokharan?\n 1) Satish Dhawan 2) Raja Ramanna 3) Vikram Sarabhai 4) S S Bhatnagar\n");
scanf("%d",&ch1);
switch(ch1){
    default:printf("wrong answer try again. :(\n");
break;
case 1:printf("wrong answer try again. :(\n");
break;
case 2:printf("You are right :)\n");
scr++;
break;
case 3:printf("wrong answer try again. :(\n");
break;
case 4:printf("wrong answer try again. :(\n");
break;
}


}

int q3(){
int ch1;
printf(" Which is India s highest award in cinema? \n1) Dadasaheb Phalke Award 2) Academy Awards 3) Filmfare 4) IIFA\n");
scanf("%d",&ch1);
switch(ch1){
    default:printf("wrong answer try again. :(\n");
break;
case 2:printf("wrong answer try again. :(\n");
break;
case 1:printf("You are right :)\n");
scr++;
break;
case 3:printf("wrong answer try again. :(\n");
break;
case 4:printf("wrong answer try again. :(\n");
break;
}


}

int q4(){
int ch1;
printf(" 'Home Rule League' was established by ?\n 1) Bal Gangadhar Tilak 2) P.S. Mehta 3) S.N. Bannerjee 4) Maulana Abdul Kalam Azad\n");
scanf("%d",&ch1);
switch(ch1){
    default:printf("wrong answer try again. :(\n");
break;
case 2:printf("wrong answer try again. :(\n");
break;
case 1:printf("You are right :)\n");
scr++;
break;
case 3:printf("wrong answer try again. :(\n");
break;
case 4:printf("wrong answer try again. :(\n");
break;
}


}

int q5(){
int ch1;
printf(" Founder of the Holkar Dynasty\n  1) Malhar Rao 2) Bana Misra 3) Baji Rao 4) Madhav Peshwa\n");
scanf("%d",&ch1);
switch(ch1){
    default:printf("wrong answer try again. :(\n");
break;
case 2:printf("wrong answer try again. :(\n");
break;
case 1:printf("You are right :)\n");
scr++;
break;
case 3:printf("wrong answer try again. :(\n");
break;
case 4:printf("wrong answer try again. :(\n");
break;
}


}

int q6(){
int ch1;
printf(" Which state has the longest coastline in India?\n 1) Andhra Pradesh 2) Maharashtra 3) Gujarat 4) West Bengal\n");
scanf("%d",&ch1);
switch(ch1){
    default:printf("wrong answer try again. :(\n");
break;
case 1:printf("wrong answer try again. :(\n");
break;
case 3:printf("You are right :)\n");
scr++;
break;
case 2:printf("wrong answer try again. :(\n");
break;
case 4:printf("wrong answer try again. :(\n");
break;
}


}


int q7(){
int ch1;
printf(" Which instrument is Ustaad Amjad Ali Khan associated with?\n  1) Sitar 2) Veena 3) Tabla 4) Sarod\n");
scanf("%d",&ch1);
switch(ch1){
    default:printf("wrong answer try again. :(\n");
break;
case 1:printf("wrong answer try again. :(\n");
break;
case 4:printf("You are right :)\n");
scr++;
break;
case 3:printf("wrong answer try again. :(\n");
break;
case 2:printf("wrong answer try again. :(\n");
break;
}


}

int q8(){
int ch1;
printf(" Who among the following founded the Atmiya Sabha in 1815?\n 1) Raja Rammohan Roy 2) Keshab Chandra sen 3) Bijoy Krishna Goswami 4) Debendranath Tagore\n");
scanf("%d",&ch1);
switch(ch1){
    default:printf("wrong answer try again. :(\n");
break;
case 2:printf("wrong answer try again. :(\n");
break;
case 1:printf("You are right :)\n");
scr++;
break;
case 3:printf("wrong answer try again. :(\n");
break;
case 4:printf("wrong answer try again. :(\n");
break;
}


}

int q9(){
int ch1;
printf("The fourth Guru of the Sikhs was\n 1) Guru Ram Das 2) Guru Angad Dev 3) Guru Gobind Singh 4) Guru Amar Das\n");
scanf("%d",&ch1);
switch(ch1){
    default:printf("wrong answer try again. :(\n");
break;
case 2:printf("wrong answer try again. :(\n");
break;
case 1:printf("You are right :)\n");
scr++;
break;
case 3:printf("wrong answer try again. :(\n");
break;
case 4:printf("wrong answer try again. :(\n");
break;
}


}

int q10(){
int ch1;
printf("Who wrote 'Discovery of India'?\n 1) Bal Gangadhar Tilak 2) Jawaharlal Nehru 3) Mahatma Gandhi 4) APJ Abdul Kalam\n");
scanf("%d",&ch1);
switch(ch1){
    default:printf("wrong answer try again. :(\n");
break;
case 1:printf("wrong answer try again. :(\n");
break;
case 2:printf("You are right :)\n");
scr++;
break;
case 3:printf("wrong answer try again. :(\n");
break;
case 4:printf("wrong answer try again. :(\n");
break;
}


}
