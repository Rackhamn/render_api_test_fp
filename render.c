#include "render.h"

void load_opengl()
{
	init_render = init_opengl;
	render_foo  = opengl_foo;
	free_render = free_opengl;
	printf("RENDER: OPENGL -> loaded functions successfully.\n");
}

void load_vulkan()
{
	init_render = init_vulkan;
	render_foo  = vulkan_foo;
	free_render = free_vulkan;
	printf("RENDER: VULKAN -> loaded functions successfully.\n");
}

void load_directx()
{
	init_render = init_directx;
	render_foo  = directx_foo;
	free_render = free_directx;
	printf("RENDER: DIRECTX -> loaded functions successfully.\n");
}

void load_software()
{
	init_render = init_software;
	render_foo  = software_foo;
	free_render = free_software;
	printf("RENDER: SOFTWARE -> loaded functions successfully.\n");
}

/* ----------------------------------- */

int load_renderer(int renderer)
{
	/* map function pointers as they should be */
	if(renderer == OPENGL)
		load_opengl();
	else if(renderer == VULKAN)
		load_vulkan();
	else if(renderer == DIRECTX)
		load_directx();
	else if(renderer == SOFTWARE)
		load_software();
	else
	{
		printf("RENDER: BAD RENDER API TYPE.\n");
		return -1;
	}

	return 0;
}

