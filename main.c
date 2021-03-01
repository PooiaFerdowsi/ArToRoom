#include <stdio.h>

int main () {
  int num; // number user input
  scanf("enter The Number %d",&num); // get correct value of $number of user
  if(num%2==0&num<4){
    int loop=0; // Loop number 
    while(loop<num){
      printf("I");
      loop+=1;
    }
  }
  return 0; // status code
}
