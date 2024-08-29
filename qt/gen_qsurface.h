#ifndef GEN_QSURFACE_H
#define GEN_QSURFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSize;
class QSurface;
class QSurfaceFormat;
#else
typedef struct QSize QSize;
typedef struct QSurface QSurface;
typedef struct QSurfaceFormat QSurfaceFormat;
#endif

uintptr_t QSurface_SurfaceClass(QSurface* self);
QSurfaceFormat* QSurface_Format(QSurface* self);
uintptr_t QSurface_SurfaceType(QSurface* self);
bool QSurface_SupportsOpenGL(QSurface* self);
QSize* QSurface_Size(QSurface* self);
void QSurface_Delete(QSurface* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
