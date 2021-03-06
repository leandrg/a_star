/*
** go_to.c for astar in /Users/leandr_g/Documents/Shared folder/TekAdventure/astar/
**
** Made by Gaëtan Léandre
** Login   <leandr_g@epitech.eu>
**
** Started on  Fri Apr  8 06:27:49 2016 Gaëtan Léandre
** Last update Fri May 20 03:06:24 2016 Gaëtan Léandre
*/

#include	"astar.h"

void		add_proc(t_star *star, int x, int y)
{
  int		i;
  int		j;
  int		tmp_x;
  int		tmp_y;

  i = -1;
  while (i < 2)
    {
      j = -1;
      while (j < 2)
	{
	  tmp_x = x + i;
	  tmp_y = y + j;
	  if ((TRAVERS == 1 || (j == 0 || i == 0))
	      && (tmp_x >= 0 && tmp_y >= 0
		  && tmp_x < star->x && tmp_y < star->y)
      	      && star->ind_list[tmp_x + star->x * tmp_y] >= 0)
	    set_coef(star, tmp_x, tmp_y);
      	  j++;
      	}
      i++;
    }
}

int		caseProche(t_star *star)
{
  int		i;
  int		j;
  int		distance;

  distance = -1;
  i = -1;
  while (++i < star->x)
    {
      j = 0;
      while (j < star->y)
	{
	  if ((star->open_list[i + star->x * j] <= distance || distance < 0)
	      && star->open_list[i + star->x * j] > 0)
	    {
	      distance = star->open_list[i + star->x * j];
	      star->cur_x = i;
	      star->cur_y = j;
	    }
	  j++;
	}
    }
  star->open_list[star->cur_x + star->x * star->cur_y] = -1;
  return (distance == -1 ? -1 : (star->ind_list[star->cur_x + star->x
				 * star->cur_y]
  = calcul_indice(star, star->cur_x, star->cur_y) + 1));
}
