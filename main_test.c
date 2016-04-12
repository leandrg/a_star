/*
** main_test.c for astar in /Users/leandr_g/Documents/Shared folder/TekAdventure/src/astar/
**
** Made by Gaëtan Léandre
** Login   <leandr_g@epitech.eu>
**
** Started on  Fri Apr  8 23:30:40 2016 Gaëtan Léandre
** Last update Tue Apr 12 16:37:18 2016 Gaëtan Léandre
*/

#include	<stdio.h>
#include	"astar.h"

int		main()
{
  char		**tab;
  t_posi	size;
  t_posi	pos;
  t_posi	end;
  t_depla	*depla;

  tab = malloc(sizeof(char *) * 10);
  tab[0] = malloc(sizeof(char) * 10);
  tab[0][0] = 0;
  tab[0][1] = 0;
  tab[0][2] = 0;
  tab[0][3] = 0;
  tab[0][4] = 0;
  tab[0][5] = 0;
  tab[0][6] = 0;
  tab[0][7] = 0;
  tab[0][8] = 0;
  tab[0][9] = 0;
  tab[1] = malloc(sizeof(char) * 10);
  tab[1][0] = 0;
  tab[1][1] = 0;
  tab[1][2] = 0;
  tab[1][3] = 0;
  tab[1][4] = 0;
  tab[1][5] = 0;
  tab[1][6] = 0;
  tab[1][7] = 0;
  tab[1][8] = 0;
  tab[1][9] = 0;
  tab[2] = malloc(sizeof(char) * 10);
  tab[2][0] = 0;
  tab[2][1] = 0;
  tab[2][2] = 0;
  tab[2][3] = 0;
  tab[2][4] = 0;
  tab[2][5] = 0;
  tab[2][6] = 0;
  tab[2][7] = 0;
  tab[2][8] = 0;
  tab[2][9] = 0;
  tab[3] = malloc(sizeof(char) * 10);
  tab[3][0] = 0;
  tab[3][1] = 0;
  tab[3][2] = 0;
  tab[3][3] = 0;
  tab[3][4] = 0;
  tab[3][5] = 0;
  tab[3][6] = 0;
  tab[3][7] = 0;
  tab[3][8] = 0;
  tab[3][9] = 0;
  tab[4] = malloc(sizeof(char) * 10);
  tab[4][0] = 0;
  tab[4][1] = 0;
  tab[4][2] = 0;
  tab[4][3] = 0;
  tab[4][4] = 0;
  tab[4][5] = 0;
  tab[4][6] = 0;
  tab[4][7] = 0;
  tab[4][8] = 0;
  tab[4][9] = 0;
  tab[5] = malloc(sizeof(char) * 10);
  tab[5][0] = 0;
  tab[5][1] = 0;
  tab[5][2] = 0;
  tab[5][3] = 0;
  tab[5][4] = 0;
  tab[5][5] = 0;
  tab[5][6] = 0;
  tab[5][7] = 0;
  tab[5][8] = 0;
  tab[5][9] = 0;
  tab[6] = malloc(sizeof(char) * 10);
  tab[6][0] = 0;
  tab[6][1] = 0;
  tab[6][2] = 0;
  tab[6][3] = 0;
  tab[6][4] = 0;
  tab[6][5] = 0;
  tab[6][6] = 0;
  tab[6][7] = 0;
  tab[6][8] = 0;
  tab[6][9] = 0;
  tab[7] = malloc(sizeof(char) * 10);
  tab[7][0] = 0;
  tab[7][1] = 0;
  tab[7][2] = 0;
  tab[7][3] = 0;
  tab[7][4] = 0;
  tab[7][5] = 0;
  tab[7][6] = 0;
  tab[7][7] = 0;
  tab[7][8] = 0;
  tab[7][9] = 0;
  tab[8] = malloc(sizeof(char) * 10);
  tab[8][0] = 0;
  tab[8][1] = 0;
  tab[8][2] = 0;
  tab[8][3] = 0;
  tab[8][4] = 0;
  tab[8][5] = 0;
  tab[8][6] = 0;
  tab[8][7] = 0;
  tab[8][8] = 0;
  tab[8][9] = 0;
  tab[9] = malloc(sizeof(char) * 10);
  tab[9][0] = 0;
  tab[9][1] = 0;
  tab[9][2] = 0;
  tab[9][3] = 0;
  tab[9][4] = 0;
  tab[9][5] = 0;
  tab[9][6] = 0;
  tab[9][7] = 0;
  tab[9][8] = 0;
  tab[9][9] = 0;
  size.x = 10;
  size.y = 10;
  pos.x = 0;
  pos.y = 0;
  end.x = 9;
  end.y = 9;
  depla = a_star(tab, &size, &pos, &end);
  while (depla != NULL)
    {
      printf("%d %d\n", depla->x, depla->y);
      depla = depla->next;
    }
  return (0);
}
