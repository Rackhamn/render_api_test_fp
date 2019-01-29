#ifndef RENDER_DIRECTX_H
#define RENDER_DIRECTX_H

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

/* "direct3d" rendering api impl. */
void init_directx(int max);
void directx_foo();
void free_directx();

#ifdef __cplusplus
}
#endif

#endif /* RENDER_DIRECTX_H */
