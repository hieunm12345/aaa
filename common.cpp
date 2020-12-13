#include "common.h"

common::common()
{

}

bool common::isSoNguyen(QString str)
{
    if(str.length() == 0)
    {
        return false;
    }

    if((str.at(0) < '0' || str.at(0) > '9') && str.at(0) != '-')
    {
        return false;
    }

    if(str.at(0) == '-' && str.length() == 1)
    {
        return false;
    }

    for(int i = 1; i < str.length(); i++)
    {
        if(str.at(i) < '0' || str.at(i) > '9')
        {
            return false;
        }
    }

    return true;
}
