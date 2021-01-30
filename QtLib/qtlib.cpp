#include "qtlib.h"


QtLib::QtLib()
{
}
int QtLib::Add(int a,int b)
{
 return a+b;
}
int QtLib::Sub(int a,int b)
{
   return a-b;
}
int QtLib::Mul(int a,int b)
{
    return a*b;}

QtLibCreate * QtLibCreateInstance(int version)
{
    if (version == KX_KXSLIP_CREATE_VERSION)
    {

        QtLibCreate* p = (QtLibCreate*)new QtLib;
        return p;
    }
    else
    {
        return nullptr;
    }
}
