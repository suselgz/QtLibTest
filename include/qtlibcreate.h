#ifndef QTLIBCREATE_H
#define QTLIBCREATE_H

#define KX_KXSLIP_CREATE_MAIN_VERSION 1
#define KX_KXSLIP_CREATE_SUB_VERSION 1
#define KX_KXSLIP_CREATE_VERSION ((KX_KXSLIP_CREATE_MAIN_VERSION << 16) + KX_KXSLIP_CREATE_SUB_VERSION)


#ifndef QTLIB_GLOBAL_H
#define QTLIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QTLIB_LIBRARY)
#  define QTLIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QTLIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QTLIB_GLOBAL_H

class  QtLibCreate
{

public:
    virtual int Add(int a,int b)=0;
    virtual int Sub(int a,int b)=0;
};
#endif // QTLIBCREATE_H

QTLIBSHARED_EXPORT QtLibCreate * QtLibCreateInstance(int version = KX_KXSLIP_CREATE_VERSION);
