#define KX_KXSLIP_CREATE_MAIN_VERSION 1
#define KX_KXSLIP_CREATE_SUB_VERSION 1
#define KX_KXSLIP_CREATE_VERSION ((KX_KXSLIP_CREATE_MAIN_VERSION << 16) + KX_KXSLIP_CREATE_SUB_VERSION)
#include <QtCore/qglobal.h>
#if defined(QTLIB_LIBRARY)
#  define QTLIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QTLIBSHARED_EXPORT Q_DECL_IMPORT
#endif

class  QtLibCreate
{

public:
    virtual int Add(int a,int b)=0;
    virtual int Sub(int a,int b)=0;
    virtual int Mul(int a,int b)=0;
};

QTLIBSHARED_EXPORT QtLibCreate * QtLibCreateInstance(int version = KX_KXSLIP_CREATE_VERSION);
