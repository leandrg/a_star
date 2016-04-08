/*
** main_test.c for astar in /Users/leandr_g/Documents/Shared folder/TekAdventure/src/astar/
**
** Made by Gaëtan Léandre
** Login   <leandr_g@epitech.eu>
**
** Started on  Fri Apr  8 23:30:40 2016 Gaëtan Léandre
** Last update Fri Apr  8 23:45:35 2016 Gaëtan Léandre
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

  tab = malloc(sizeof(char *) * 4);
  tab[0] = malloc(sizeof(char) * 4);
  tab[0][0] = 0;
  tab[0][1] = 0;
  tab[0][2] = 0;
  tab[0][3] = 0;
  tab[1] = malloc(sizeof(char) * 4);
  tab[1][0] = 0;
  tab[1][1] = 0;
  tab[1][2] = 0;
  tab[1][3] = 0;
  tab[2] = malloc(sizeof(char) * 4);
  tab[2][0] = 0;
  tab[2][1] = 0;
  tab[2][2] = 0;
  tab[2][3] = 0;
  tab[3] = malloc(sizeof(char) * 4);
  tab[3][0] = 0;
  tab[3][1] = 0;
  tab[3][2] = 0;
  tab[3][3] = 0;
  size.x = 4;
  size.y = 4;
  pos.x = 0;
  pos.y = 0;
  end.x = 3;
  end.y = 3;
  depla = a_star(tab, &size, &pos, &end);
  while (depla != NULL)
    {
      printf("%d %d\n", depla->x, depla->y);
      depla = depla->next;
    }
  return (0);
}
