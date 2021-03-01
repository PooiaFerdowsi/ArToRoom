#include <stdio.h>

int main () {
  int num; // number user input
  scanf("enter The Number %d",&num); // get correct value of $number of user
  if(num!=0&num!=1&num<4){
    int loop=0; // Loop number 
    while(loop<num){
      printf("I");
      loop+=1;
    }
  }else if(num==1)printf("I");
  else if(num!=num){
    break
  }
  return 0; // status code
}
