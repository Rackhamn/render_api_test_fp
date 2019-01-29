#ifndef RENDER_VULKAN_H
#define RENDER_VULKAN_H

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

/* "vulkan" rendering api impl. */
void init_vulkan(int max);
void vulkan_foo();
void free_vulkan();

#ifdef __cplusplus
}
#endif

#endif /* RENDER_VULKAN_H */
