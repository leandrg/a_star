/*
** calculs.c for astar in /Users/leandr_g/Documents/Shared folder/TekAdventure/astar/
**
** Made by Gaëtan Léandre
** Login   <leandr_g@epitech.eu>
**
** Started on  Fri Apr  8 06:26:22 2016 Gaëtan Léandre
** Last update Fri May 20 02:09:24 2016 Gaëtan Léandre
*/

#include	"astar.h"

int		calculDistance(int xA, int xB, int yA, int yB)
{
  int distanceAC;
  int distanceBC;
  int distanceTotale;

  distanceAC = ABS(xB - xA);
  distanceBC = ABS(yA - yB);
  distanceTotale = distanceAC + distanceBC + 1;
  return (distanceTotale);
}

int		calcul_indice(t_star *star, int x, int y)
{
  int		i;
  int		j;
  int		tmp_x;
  int		tmp_y;
  int		ind;

  i = -1;
  ind = 0;
  while (i < 2)
    {
      j = -1;
      while (j < 2)
	{
	  tmp_x = x + i;
	  tmp_y = y + j;
	  if ((TRAVERS == 1 || (j == 0 || i == 0)) && (tmp_x >= 0 && tmp_y >= 0
		  && tmp_x < star->x && tmp_y < star->y)
	      && star->ind_list[tmp_x + star->x * tmp_y] > 0
	      && (ind > star->ind_list[tmp_x + star->x * tmp_y] || ind == 0))
	    ind = star->ind_list[tmp_x + star->x * tmp_y];
	  j++;
	}
      i++;
    }
  return (ind);
}

void		set_coef(t_star *star, int x, int y)
{
  int		coef;

  if (star->open_list[x + star->x * y] != -1)
    {
      coef = calculDistance(x, star->end_x, y, star->end_y) * 10;
      coef += calcul_indice(star, x, y) + 1;
      star->open_list[x + star->x * y] = coef;
    }
}
