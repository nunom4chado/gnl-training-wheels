#include <stdlib.h>
#include <unistd.h>
#include "libgnltw.h"
#include "get_next_line.h"

#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>

int	main()
{
	int	fd;
	char *ptr;

	fd = open("hello.txt", O_RDONLY);

	if (fd == -1)
	{
		printf("error opening file\n");
		return (1);
	}

	while (1)
	{

		// ------
		// The function tw_get_next_line is a implementation of get_next_line
		// you can pass the training wheels functions or your own
		// you can comment that line and uncomment the one below.
		// Note: don't use both function calls at the same time.
		// ------
		ptr = tw_get_next_line(fd, tw_read_file, tw_get_line_from_stash, tw_remove_previous_from_stash);
		// ptr = get_next_line(fd);
		printf("line: %s", ptr);
		if (!ptr)
			break ;
		free(ptr);
	}

	close(fd);
	return (0);
}
