#ifndef RENDER_SOFTWARE_H
#define RENDER_SOFTWARE_H

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

/* "software" rendering api impl. */
void init_software(int max);
void software_foo();
void free_software();

#ifdef __cplusplus
}
#endif

#endif /* RENDER_SOFTWARE_H */
