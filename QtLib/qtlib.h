#ifndef QTLIB_H
#define QTLIB_H
#include "qtlibcreate.h"


class  QtLib:public QtLibCreate
{

public:
    QtLib();
    int Add(int a,int b);
    int Sub(int a,int b);
    int Mul(int a,int b);
};

#endif // QTLIB_H
