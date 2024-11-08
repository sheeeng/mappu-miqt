#ifndef GEN_QPICTURE_H
#define GEN_QPICTURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QIODevice;
class QPaintEngine;
class QPainter;
class QPicture;
class QPictureIO;
class QRect;
#else
typedef struct QByteArray QByteArray;
typedef struct QIODevice QIODevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPicture QPicture;
typedef struct QPictureIO QPictureIO;
typedef struct QRect QRect;
#endif

QPicture* QPicture_new();
QPicture* QPicture_new2(QPicture* param1);
QPicture* QPicture_new3(int formatVersion);
bool QPicture_IsNull(const QPicture* self);
int QPicture_DevType(const QPicture* self);
unsigned int QPicture_Size(const QPicture* self);
const char* QPicture_Data(const QPicture* self);
void QPicture_SetData(QPicture* self, const char* data, unsigned int size);
bool QPicture_Play(QPicture* self, QPainter* p);
bool QPicture_Load(QPicture* self, QIODevice* dev);
bool QPicture_LoadWithFileName(QPicture* self, struct miqt_string fileName);
bool QPicture_Save(QPicture* self, QIODevice* dev);
bool QPicture_SaveWithFileName(QPicture* self, struct miqt_string fileName);
QRect* QPicture_BoundingRect(const QPicture* self);
void QPicture_SetBoundingRect(QPicture* self, QRect* r);
void QPicture_OperatorAssign(QPicture* self, QPicture* p);
void QPicture_Swap(QPicture* self, QPicture* other);
void QPicture_Detach(QPicture* self);
bool QPicture_IsDetached(const QPicture* self);
const char* QPicture_PictureFormat(struct miqt_string fileName);
struct miqt_array QPicture_InputFormats();
struct miqt_array QPicture_OutputFormats();
struct miqt_array QPicture_InputFormatList();
struct miqt_array QPicture_OutputFormatList();
QPaintEngine* QPicture_PaintEngine(const QPicture* self);
bool QPicture_Load2(QPicture* self, QIODevice* dev, const char* format);
bool QPicture_Load22(QPicture* self, struct miqt_string fileName, const char* format);
bool QPicture_Save2(QPicture* self, QIODevice* dev, const char* format);
bool QPicture_Save22(QPicture* self, struct miqt_string fileName, const char* format);
void QPicture_Delete(QPicture* self);

QPictureIO* QPictureIO_new();
QPictureIO* QPictureIO_new2(QIODevice* ioDevice, const char* format);
QPictureIO* QPictureIO_new3(struct miqt_string fileName, const char* format);
QPicture* QPictureIO_Picture(const QPictureIO* self);
int QPictureIO_Status(const QPictureIO* self);
const char* QPictureIO_Format(const QPictureIO* self);
QIODevice* QPictureIO_IoDevice(const QPictureIO* self);
struct miqt_string QPictureIO_FileName(const QPictureIO* self);
int QPictureIO_Quality(const QPictureIO* self);
struct miqt_string QPictureIO_Description(const QPictureIO* self);
const char* QPictureIO_Parameters(const QPictureIO* self);
float QPictureIO_Gamma(const QPictureIO* self);
void QPictureIO_SetPicture(QPictureIO* self, QPicture* picture);
void QPictureIO_SetStatus(QPictureIO* self, int status);
void QPictureIO_SetFormat(QPictureIO* self, const char* format);
void QPictureIO_SetIODevice(QPictureIO* self, QIODevice* iODevice);
void QPictureIO_SetFileName(QPictureIO* self, struct miqt_string fileName);
void QPictureIO_SetQuality(QPictureIO* self, int quality);
void QPictureIO_SetDescription(QPictureIO* self, struct miqt_string description);
void QPictureIO_SetParameters(QPictureIO* self, const char* parameters);
void QPictureIO_SetGamma(QPictureIO* self, float gamma);
bool QPictureIO_Read(QPictureIO* self);
bool QPictureIO_Write(QPictureIO* self);
struct miqt_string QPictureIO_PictureFormat(struct miqt_string fileName);
struct miqt_string QPictureIO_PictureFormatWithQIODevice(QIODevice* param1);
struct miqt_array QPictureIO_InputFormats();
struct miqt_array QPictureIO_OutputFormats();
void QPictureIO_Delete(QPictureIO* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
