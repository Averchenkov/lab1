#include "func.h"

bool poloj(std::vector<int> &a)
{
    bool f=true;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]<=0) f=false;
    }
    return f;
}
