#include"tic_tac_toe_functions.h"

int fun_player(int player_no){
   player_no = (player_no % 2) ? 1 : 2;
      return player_no;   
}
