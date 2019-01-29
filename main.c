#include "render.h"

/* render.h is essentially a function poitner wrapper for
	the other "apis".
	Can use OPENGL without render if you want to.
	etc.

	This is not an actual api, just a test for using simple function pointers with names.
*/

#define MY_API_VALUE_MAX 4096

int main(int argc, char **argv)
{
	int success = 0;
	int i = 0;

	while(i <= 4)
	{
		success = load_renderer(i);
		if(success < 0) { return -1; }

		init_render(MY_API_VALUE_MAX);
		render_foo();
		free_render();

		printf("\n");
		i++;
	}

	return 0;
}
