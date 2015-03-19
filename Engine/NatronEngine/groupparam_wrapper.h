#ifndef SBK_GROUPPARAMWRAPPER_H
#define SBK_GROUPPARAMWRAPPER_H

#include <shiboken.h>

#include <ParameterWrapper.h>

class GroupParamWrapper : public GroupParam
{
public:
    inline void _addAsDependencyOf_protected(int fromExprDimension, Param * param) { GroupParam::_addAsDependencyOf(fromExprDimension, param); }
    virtual ~GroupParamWrapper();
    static void pysideInitQtMetaTypes();
};

#endif // SBK_GROUPPARAMWRAPPER_H

