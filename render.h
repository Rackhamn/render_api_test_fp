#ifndef RENDER_H
#define RENDER_H

#include <stdio.h>

#include "render_software.h"
#include "render_opengl.h"
#include "render_directx.h"
#include "render_vulkan.h"

#ifdef __cplusplus
extern "C" {
#endif

#define SOFTWARE	0
#define OPENGL 		1
#define VULKAN 		2
#define DIRECTX  	3

/* ----------------------------------- */

void (* init_render)(int max);
void (* render_foo)();
void (* free_render)();

void load_opengl();
void load_vulkan();
void load_directx();
void load_software();

int load_renderer(int renderer);

#ifdef __cplusplus
}
#endif

#endif /* RENDER_H */
