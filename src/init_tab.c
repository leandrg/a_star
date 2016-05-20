/*
** init_tab.c for astar in /Users/leandr_g/Documents/Shared folder/TekAdventure/astar/
**
** Made by Gaëtan Léandre
** Login   <leandr_g@epitech.eu>
**
** Started on  Fri Apr  8 06:25:15 2016 Gaëtan Léandre
** Last update Fri May 20 02:04:16 2016 Gaëtan Léandre
*/

#include	"astar.h"

int		init_tab(t_star *star)
{
  int		i;
  int		max;

  max = star->x * star->y;
  if ((star->ind_list = malloc(sizeof(int) * max)) == NULL
      || (star->open_list = malloc(sizeof(int) * max)) == NULL)
    return (-1);
  i = 0;
  while (i < max)
    {
      star->ind_list[i] = 0;
      star->open_list[i] = 0;
      i++;
    }
  return (0);
}

void	 	case_is_free(char *obj, t_star *star)
{
  int		i;
  int		max;

  max = star->x * star->y;
  i = 0;
  while (i < max)
    {
      if (obj[i] != '*')
	{
	  star->ind_list[i] = -1;
	  star->open_list[i] = -1;
	}
      i++;
    }
}

int		init_star(t_star *star, t_posi *size, t_posi *pos, t_posi *end)
{
  star->x = size->x;
  star->y = size->y;
  if (size->x < 1 || size->y < 1)
    return (-1);
  star->cur_x = pos->x;
  star->cur_y = pos->y;
  if (pos->x < 0 || pos->y < 0 || pos->x >= size->x || pos->y >= size->y)
    return (-1);
  star->end_x = end->x;
  star->end_y = end->y;
  if (end->x < 0 || end->y < 0 || end->x >= size->x || end->y >= size->y)
    return (-1);
  star->depla = NULL;
  return (0);
}
