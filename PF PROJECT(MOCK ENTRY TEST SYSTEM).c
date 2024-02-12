#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include<ctype.h>
struct details{
 char name[100];
 int age;
 char fname[100];
 char email[100];
};
void admitcard(struct details s1){
	printf("\n\t\t**********ADMIT CARD***********");
	printf("\nName: %s\n",s1.name);
	printf("Father Name: %s\n",s1.fname);
	fflush(stdin);
	printf("Age: %d\n",s1.age);
	printf("Email Adress: %s",s1.email);
    unsigned seed=time(0);
    srand(seed);	
	printf("\nRoll number: %d",rand()); 
	printf("\n*****************************************"); 
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
}
void Result(int etotal,int mtotal, int ptotal,int total){

	printf("***********************************\n\n\t\t\t\t::::RESULT::::\n");	
	total=total*10;   // Each MCQ is of 10 marks
	printf("\nTotal number obtained: %d\nCorrect number of questions in English are: %d\nCorrect number of questions in Mathematics are: %d\nCorrect number of questions in Physics are: %d",total,etotal,mtotal,ptotal);
    printf("\n\t****** REMARKS *******\n");
    printf("\n\t****** ENGLISH *******\n");
if(etotal==5){
	printf("You attempted all questions correctly\n");
	printf("EXCELLENT\n");
}
else if(etotal==4){
	printf("You attempted 4 questions correctly\n");
	printf("GOOD\n");
	}
else if(etotal==3){
		printf("You attempted 3 questions correctly\n");
	
		printf("AVERAGE\n");
}
else if (etotal==2){
	printf("You attempted 2 questions correctly\n");
	printf("NEED IMPROVEMENT IN ENGLISH\n");
	
}
else if (etotal==1){
	printf("You attempted 1 question correctly\n");
	printf("NEED IMPROVEMENT IN ENGLISH\n");
}
else if(etotal==0){
		printf("You attempted 0 questions\n");
	printf("\t\tPOOR\n");
}
 printf("\n\t****** MATHS *******\n");
 if(mtotal==5){
	printf("You attempted all questions correctly\n");
	printf("\tEXCELLENT\n");

}
else if(mtotal==4){
	printf("You attempted 4 questions correctly\n");
	printf("GOOD\n");
}
else if(mtotal==3){
	printf("You attempted 3 questions correctly\n");
	printf("AVERAGE\n");
}
else if(mtotal==2){
	printf("You attempted 2 questions correctly\n");
	printf("NEED IMPROVEMENT IN MATHS\n");
}
else if(mtotal==1){
	printf("You attempted 1 question correctly\n");
	printf("NEED IMPROVEMENT IN MATHS\n");
}
else if(mtotal==0){
		printf("You attempted 0 questions\n");
	printf("\t\tPOOR\n");
}
 printf("\n\t****** PHYSICS *******\n");
 if(ptotal==5){
	printf("You attempted all questions correctly\n");
	printf("EXCELLENT\n");
}
else if(ptotal==4){
	printf("You attempted 4 questions correctly\n");
	printf("GOOD\n");
}
else if(ptotal==3){
	printf("You attempted 3 questions correctly\n");
	printf("AVERAGE\n");
}
else if(ptotal==2){
	printf("You attempted 2 questions correctly\n");
	printf("NEED IMPROVEMENT IN PHYSICS\n");
}
	else if(ptotal==1){
	printf("You attempted 1 question correctly\n");
	printf("NEED IMPROVEMENT IN PHYSICS\n");
}
else if(ptotal==0){
	printf("You attempted 0 questions\n");
	printf("\t\tPOOR\n");
	
}
 if(total<70){
 	printf("\nOVERALL\n");
	printf("\n\tFAIL");
}
else if(total>=70){
	printf("\nOVERALL\n");
	printf("\n\tPASSED");
}
}

int main(){
	int total=0;
	int etotal=0;
	int mtotal=0;
	int ptotal=0;
	char answer;
	int revchoice;
	char username[100];
	char password[100];
	char eusername[100];
	char epassword[100];
	int  choice,logchoice;
	int i,j;
  
    	char english[][100]={"1.I am worried___ the exam.\n\nA.Of B.About C.To D.From",
	                      "\n\n2.I _ working all afternoon and have just finished the assignment.\n\nA.am B.have been C.was D.i",
	                      "\n\n3.Fortuitous means__.\n\nA.Alone B.Sad.C.Unexpected D.fruitful",
	                      "\n\n4.Synonym of Continue is ____\n\nA.Hidden B.Discontinue C.Hide D.Go on",
	                      "\n\n5.Antonym of Adult is _____\n\nA.Child B.Grown person C.Old D.Young"
					
	};
	char eanswers[]={'A','B','C','D','A'};
	char maths[][100]={"1.Squareroot of 25 is _\n\nA.5 B.3 C.6 D.9",
	"\n\n2.Cube of 3 is___\n\nA.16 B.32 C.24 D.27",
	"\n\n3.4+5-9/3 is__\n\nA.0 B.12 C.6 D.4",
	"\n\n4.Unit circle has radius of___ unit\n\nA.1 B.0 C.100 D.1000",
	"\n\n5.What is 1 divided by 0\n\nA.Infinity B.Undefined C.0 D.1"
	};
	char manswers[]={'A','D','C','A','B'};
	char physics[][200]={"\n\n1.Unit of speed is __\n\nA.m/s B.Kg/s C.g/cm D.N/m",
	"\n\n2.Unit of Force is __\n\nA.Newton B.Kg C.meter D.centimeter",
	"\n\n3.Formula of momentum is___\n\nA.p=Fv B.p=mv C.p=F.d D.p=at",
	"\n\n4.Theory of relativity is given by\n\nA.Nikola Tesla B.Einstein C.JJ Thompson D.Al-Beruni",
	"\n\n5.Einstien got Nobel prize for __\n\nA.Theory of relativity\n\nB.Photoelectric effect\n\nC.Quantam Theory\n\nD.General realativity"};
	char panswers[]={'A','A','B','B','B'};
printf("    \t \t \t    ***********WELCOME TO MOCK ENTRY TEST**********                ");
raw:
	printf("\n\n\t\t\t   Press 1 to create an account and 2 for Logging in \n");
	scanf("%d",&choice);
	fflush(stdin);
	switch(choice){
		case 1:
			printf("Create an account:\n");
    printf("\nEnter username:\n");
    gets(username);
    printf("\nEnter password:\n");
    gets(password);
    printf("\t \t \t \tACCOUNT CREATED SUCCESSFULLY!\n");
    goto raw; //this takes user back to the option where user is asked to create an account again or to login in
	break;
	case 2:
	printf("\n \t \t \t \t \t  LOG IN\n");
	printf("\n \t \tNote: User name and password are case sensitive make sure capslock is OFF");
	isi:
    printf("\nEnter username:\n");
    gets(eusername);
    printf("Enter password \n");
    gets(epassword);
    if((strcmp(eusername,username)==0)&&(strcmp(epassword,password))==0){
    	printf(" \n\t\t\t\tLOGGED IN SUCCESSFULLY! \n \n \n");
    
	}
	else{
		printf("Username or password is incorrect");
		goto isi;//if user name or password is incorrect it goes back where we have to input username and password again 
		}
printf("The test will be based on following pattern:\n1.The test will contain three subjects.\n2.each subject will contain 5 multiple choice questions.\n3.Attempting all three subjects is compulsory.\n4.Each MCQ is of 10 marks.\n");

printf("\nRead the above mentioned instructions thoroughly and press any button to proceed to generating admit card phase:\n");
scanf("\n%d",&logchoice);
switch(logchoice){

default:
		system("cls");
		
}

	
printf("Before proceeding further read the following instructions:\n1.Enter your name and age the sane as written on your equivalent HSC marksheet.\n2.After entering your details you will be given a roll number paired up with your name.\n");
	struct details s1;
	fflush(stdin);
	  printf("\nEnter name: \n");
	  gets(s1.name);
	  printf("\nEnter your father's name: \n");
	  gets(s1.fname); 
	  fflush(stdin);
	  printf("\nEnter age: \n");
	  scanf("%d",&s1.age);
	  fflush(stdin);
      printf("\nEnter your email: \n");
     gets(s1.email);
      fflush(stdin);
     
admitcard(s1);
 
   printf("\nPress any button to continue ");
   scanf("%d",&revchoice);
   switch(revchoice){
   	default:
   		system("cls");
   		break;

   	}
   

fflush(stdin);

printf("\n\t\t\t\t***********TEST STARTS NOW*************");
int sub=1;
switch(sub){
	case 1:
		printf("\n\n\n\t\t\t\t\t*********ENGLISH**********\n");
		for(i=0;i<5;i++){
			printf("%s\n",english[i]);
			scanf(" %c",&answer);
			answer= toupper(answer);
			if(answer==eanswers[i]){
				etotal++;
				total++;
			}
				system("cls");
		}
    
      	
    case 2:
    	printf("\n\t\t\t\t*************MATH*************\n");
    	for(i=0;i<5;i++){
    		printf("%s\n",maths[i]);
    		scanf(" %c",&answer);
    		answer=toupper(answer);
    		if(answer==manswers[i]){
             mtotal++;
             total++;
			}
			system("cls");
		}
    case 3:
    	
	 printf("\n\t\t\t\t**********PHYSICS***********\n");
	for(i=0;i<5;i++){
		printf("%s\n",physics[i]);
		scanf(" %c",&answer);
		answer=toupper(answer);
		if(answer==panswers[i]){
		 ptotal++;
		 total++;	
		}
			system("cls");
	}
	
	 break;
	
		
}
system("cls");
printf("Press 1 to View result or any button to exit");
int opt;
scanf("%d",&opt);
 if(opt==1){
 
 Result(etotal,mtotal,ptotal,total);
}
else{
	return 0;
}
}


}


