/*
** main.c for astar in /Users/leandr_g/Documents/Shared folder/a_star/src/
**
** Made by Gaëtan Léandre
** Login   <leandr_g@epitech.eu>
**
** Started on  Fri May 20 01:31:33 2016 Gaëtan Léandre
** Last update Fri May 20 01:55:10 2016 Gaëtan Léandre
*/

#include	<stdlib.h>
#include	"astar.h"

int		main(int ac, char **av)
{
  t_read	read;
  t_depla	*depla;

  if (ac != 2)
    return (my_putstr("Mauvais nombre d'arguments\n", 2));
  else if (read_map(av[1], &read) == 0)
    return (0);
  read.pos.x = 0;
  read.pos.y = 0;
  read.end.x = read.size.x - 1;
  read.end.y = read.size.y - 1;
  depla = a_star(read.lab, &read.size, &read.pos, &read.end);
  while (depla != NULL)
    {
      printf("%d %d\n", depla->x, depla->y);
      depla = depla->next;
    }
  free(read.lab);
  return (1);
}
