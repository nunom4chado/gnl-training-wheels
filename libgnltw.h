#ifndef LIBGNLTW_H
# define LIBGNLTW_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*tw_read_file(int fd, char *stash);
char	*tw_get_line_from_stash(char *stash);
char	*tw_remove_previous_from_stash(char *stash);
char	*tw_get_next_line(int fd, char*(*f1)(int, char *), char*(*f2)(char *), char*(*f3)(char *));

# endif
