#include <stdio.h>
#include <stdlib.h>
#include "game_aux.h"

void game_print(cgame g){
  if(g!=NULL){
    printf("   01234567   \n"); printf("   --------   \n");
    for(int i = 0;i <8;i++){
      printf("%d |",i);
      for(int j = 0; j < 8; j++){
        if(game_get_square(g,i,j)== EMPTY){printf(" ");}
        if(game_get_square(g,i,j)==TREE){printf("x");}
        if(game_get_square(g,i,j)==TENT){printf("*");}
        if(game_get_square(g,i,j)==GRASS){printf("-");}
      }
      printf("| %u\n",game_get_expected_nb_tents_row(g,i));
    }
    printf("   --------   \n");
    printf("   40121121   \n");
  }
  //if (game_get_square(g, i,j ) == EMPTY)  printf(" ");
  //if (game_get_square(g, i,j) == TREE ) printf("x") ;
  //pour le game_print tu doit comencer par verifier si ( g != NULL ) --> tu peint ( "    01234567) ; --> print ("   --------") --> bouclde (i){
    //print("%d |" ,i) ;
      //bouvlDe(j){
        //condision qui contian ( game_get_square(g,^^,^^) {
          //  print( soi *" ou "x" ou "-" ou " " ) ;
         //}
       //}
      //printf("| %u\n" ,game_get_expected_nb_tents_row(^_^,^_^))
   //}
//print("-----------\n");
//print("      " ) ;
//boucl pour afficher ( game_get_expected_nb_tents_col ) ;
//print("\n") ;

}
game game_default(void){
  square squares [64] = {0,0,0,0,1,1,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0};
  uint nb_tents_row [8] = {3,0,4,0,4,0,1,0};
  uint nb_tents_col [8] = {4,0,1,2,1,1,2,1};
  game g = game_new(squares,nb_tents_row,nb_tents_col);
  return  g;
}

game game_default_solution(void){
    square s [64] = {2,3,3,2,1,1,2,3,1,3,3,3,3,3,3,1,2,3,3,2,1,2,3,
    2,1,3,3,3,3,1,3,3,2,1,2,3,2,3,2,3,1,3,3,3,1,3,1,3,2,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3};
    uint nb_tents_row [8] = {3,0,4,0,4,0,1,0};
    uint nb_tents_col [8] = {4,0,1,2,1,1,2,1};
    game g = game_new(s,nb_tents_row,nb_tents_col);
    return  g;
    return EXIT_SUCCESS;
}