#include<stdio.h>
#include<stdlib.h>
      int detr_win(int user, int computer){
     switch(user){
      case 1:
       switch(computer){
        case 1:
            return 0;//Tie
        case 2:
            return 1;//user wins
        case 3:
            return -1;//pc wins
            break;
       }
      case 2:
       switch(computer){
        case 1:
            return -1;
        case 2:
            return 0;
        case 3:
            return 1;
            break;
       }
      case 3:
       switch(computer){
        case 1:
            return -1;
        case 2:
            return 1;
        case 3:
            return 0;
            break;
       }
      break;      
      default:
      }
       }
int main(){
      //rock(1),Scissors(2),paper(3)
     int user, computer;
     printf("Choose wheather Rock(1),Scissor(2) or Paper(3)");
     scanf("%d",&user);
     computer=rand()%3+1;
     int winner=detr_win(user,computer);
     printf("User choosed %d PC choosed %d\n",user,computer);
     switch(winner){
            case 1:
            printf("User won!");
            break;
            case 0:
            printf("Tie!");
            break;
            case -1:
            printf("PC won!");
            break;
            case -2:
            printf("Invaild input!");
            break;
     }
      return 0;
}
