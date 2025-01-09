project 1 = Number guessing game //

#include <stdio.h> 


int main() {
 
 int guess,num=10,count = 0;
 printf("Welcome to my guessing game\n \n");
 
 printf("Enter the number between(0 to 10)\n");
 scanf("%d",&guess);
 
 

while(guess != num ) {
 printf("Enter the number between(0 to 10)\n");
 count++;
 if(guess > num) {
   printf("Guess a smaller number\n");
   scanf("%d",&guess);
 }
  else if(guess < num) {
   printf("Guess a larger number\n");
   scanf("%d",&guess);
 } 
 }
 
 printf("Congratulations 💐💋🌹 you won the game\n");
  
 printf("You guess number in %d attempted\n \n \n",count);


 
 printf("Developed by manish");
return 0;
}
