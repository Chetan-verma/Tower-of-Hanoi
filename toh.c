#include<stdio.h>
void Move(int Disc, int tower1, int tower3, int temp_tower);//to move disc from one tower to another tower
int main(){
    int Disc;
    printf("Enter the number of Disc in tower 1: ");
    scanf("%d",&Disc);
    if (Disc>15)
    {
        printf("It will take lot of time in your system so please don't try more than 15: ");
        return 0;
    }
    Move(Disc, 1, 3, 2);
    return 0;
}
void Move(int Disc, int tower1, int tower3, int temp_tower){
    if(Disc!=0){
    int y;//it  is varialbe which will update disc every time while calling the function by itself.
    y=Disc-1;
    Move(y, tower1, temp_tower, tower3);
    printf("Move disk Disc %d from tower %d to tower %d.\n",Disc, tower1, tower3);
    Move(y, temp_tower, tower3, tower1);
    }
}
