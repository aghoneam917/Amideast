#include<stdio.h>
#include<stdlib.h>

int main() {
      int time=20,day=8,i=0,j=0;
      //if case
      if(time>day){
        printf("yes");
      }
      (time < 18)? printf("Good day."): printf("Good evening.");//short hand if else
      //switches
    switch(day){
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
    default:
    printf("fuck you");
  }
  while(i<5){
  printf("%d\n", i);
  i++;
}
//for loop
for (i = 0; i <= 10; i = i + 2) {
  printf("%d\n", i);
}
//nested for loop
for(i=1; i<=2; i++){
  //outer loop
     printf("Outer:%d\n",i);  // Executes 2 times
    // Inner loop
    for(j=1; j<=3;j++){
     printf("Inner:%d\n",j);  // Executes 6 times (2 * 3)
    }
  }
  //break & continue states
  for (i = 0; i < 10; i++) {
  if (i <= 4) {
    break; //it will skip 4
    //break; //it will stop at for
  }
  printf("%d\n", i);
}
return 0;
}