#ifndef RENDER_OPENGL_H
#define RENDER_OPENGL_H

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

/* "opengl" rendering api impl. */
void init_opengl(int max);
void opengl_foo();
void free_opengl();

#ifdef __cplusplus
}
#endif

#endif /* RENDER_OPENGL_H */
