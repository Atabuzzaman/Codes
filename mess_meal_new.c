#include<stdio.h>
int main()
{
    int i,j, day, total_cost=0, total_meal=0, man;
    float meal_rate;
    printf("\n\t\t\tWELCOME SIR\n");
    printf("Press 1 for continue\nPress 0 for  exit\n");
    scanf("%d",&j);
    switch (j){
        case 0: break;
            case 1: printf("Enter how many days meal you want to calculate: ");
                            scanf("%d",&day);
                            int d_cost[day], d_meal[day];
                            for(i=1; i<=day; i++){
                                printf("Enter day: %d total meal & cost:\n",i);
                                scanf("%d %d",&d_meal[i], &d_cost[i]);
                                total_cost+=d_cost[i];
                                total_meal+=d_meal[i];
                            }
                            printf("Total_cost:%d\n\n",total_cost);
                            printf("Total_meal:%d\n\n",total_meal);
                            meal_rate=(float)total_cost/total_meal;
                            printf("Meal_rate:%.2f\n\n",meal_rate);
                            printf("Enter how many Members in the Mess: \n");
                            scanf("%d",&man);
                            char name[man][20];
                            int taka[man], meal[man],t_meal=0;
                            float cost[man], differ[man];
                            printf("Enter all member Nickname only:\n");
                            for(i=1;i<=man;i++)
                                scanf("%s",name[i]);
                            for(i=1; i<=man; i++){
                                printf("Enter %s total meal & Cash taka: \n", name[i]);
                                scanf("%d %d",&meal[i],&taka[i]);
                                t_meal+=meal[i];
                            }
                            if(total_meal==t_meal){
                                for(i=1; i<=man; i++){
                                    cost[i]=meal_rate*meal[i];
                                    differ[i]=taka[i]-cost[i];
                                    printf("Cost of %s is:%.2f\n",name[i],cost[i]);
                                    if(differ[i]<=0)
                                        printf("%s should Pay: %.2f TK\n\n",name[i],differ[i]*(-1));
                                    else
                                        printf("%s will get: %.2f TK\n\n", name[i],differ[i]);
                                }
                                break;
                            }
                            else
                                printf("You have made a mistake Counting meal.\n");
                                break;
    }
    return 0;
}
