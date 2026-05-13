#include <stdio.h>
#include "RRE.h"

int main() {
PlayerStat player = {0};        //player struct 
player.Entity_ID = 1;               //player is ID 1
player.Health = 100.00;         //player health 
player.Attack = 10;                 //player attack stat 
player.Defense = 12;              //how much the player can block 
player.Money = 0.00;              //dolla dolla $$$$$$$

PlayerLevel progress = {0};                      //progress is lowercase to show that it is not the struct. You do not need to do this, aslong as its not the same as the structs name ie PlayerLevel cannot be PlayerLevel
progress.Level = 0;
progress.Moral = 100.00;
progress.XP = 0.00;

//remove this when developing your game 
  printf("ALL WORKS!\n");                                             //prints the def to make sure all data is imput correctly 
  printf("Ent ID: %i\n", player.Entity_ID);
  printf("Player Health: %f\n",  player.Health);
  printf("Attack Stat: %i\n", player.Attack);
  printf("Defense Stat: %i\n", player.Defense);
  printf("money: %f\n", player.Money);
  printf("Level: %i\n", progress.Level);
  printf("Moral: %f\n", progress.Moral);
  printf("XP: %f\n", progress.XP);
  printf("------------------------------------------------------\n");
  return 0;
}