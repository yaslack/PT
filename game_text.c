  #include <stdlib.h>
  #include <stdio.h>
  #include "game_aux.h"

  int main(void){
      game g = game_default();
          while(game_is_over(g)==false){
            game_print(g);
            char lettre,c;
            uint num,i, j;
            printf("acton:... [h for help]\n");
            lettre = scanf("%s",&c);
            if(c == 'h'){
              printf("action: help\n"
              "- press 't <i> <j>' to put a tent at square (i,j)\n"
              "- press 'g <i> <j>' to put grass at square (i,j)\n"
              "- press 'e <i> <j>' to erase square (i,j)\n"
              "- press 'r to restart\n"
              "- press 'q to quit\n");
            }
            else if(c == 'q'){
              printf("What a shame you loose :(\n");
              return EXIT_SUCCESS;
            }
            else if(c == 'r'){
              game_restart(g);
              main();
            }
            square s;
            int move;
            num = scanf(" %d %d",&i,&j);
            if(lettre == 1){
              if(num == 2){
                if(c == 't'){
                  s = 2;
                  move = game_check_move(g, i, j, s);
                  if (move == 1 || move == 2){
                    if(move == 1){
                      printf("This is a Regular move\n");
                    }
                    else if(move == 2){
                      printf("this is a Losing move\n");
                    }
                    game_play_move(g, i, j, s);
                  }
                  else if(move == 0){
                    printf("This is an Illegal move\n");
                  }
                }
                else if(c == 'g'){
                  s = 3;
                  game_play_move(g, i, j, s);
                  game_check_move(g, i, j, s);
                }
                else if(c == 'e'){
                  s = 0;
                  game_play_move(g, i, j, s);
                  game_check_move(g, i, j, s);
                }
              }
              else if (num == 1 || num == 0){
                printf("Please enter 2 integers");
              }
            }
          }
          game_default_solution();
          printf("Congratulation you win");
          game_print(g);
  /*    Tant que la partie n'est pas gagnée :
          Afficher la grille
          Lire la commande <c> sur l'entrée standard
          Si la commande <c> == 'h' alors
            Afficher l'aide
          Sinon si la commande <c> == 'r' alors
            Reinitialiser la grille
          Sinon si la commande <c> =='q' alors
            Quitter
          Sinon si la commande est de la forme <c> <i> <j> alors
            Placer (si possible) dans la case (<i>,<j>) une tente (<c> == 't'), ou de l'herbe (<c> == 'g') ou une case vide (<c> == 'e').
          Fin si
        Fin tant que*/
      return EXIT_SUCCESS;
  }