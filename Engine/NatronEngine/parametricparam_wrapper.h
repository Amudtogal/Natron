#ifndef SBK_PARAMETRICPARAMWRAPPER_H
#define SBK_PARAMETRICPARAMWRAPPER_H

#include <shiboken.h>

#include <ParameterWrapper.h>

class ParametricParamWrapper : public ParametricParam
{
public:
    inline void _addAsDependencyOf_protected(int fromExprDimension, Param * param) { ParametricParam::_addAsDependencyOf(fromExprDimension, param); }
    virtual ~ParametricParamWrapper();
    static void pysideInitQtMetaTypes();
};

#endif // SBK_PARAMETRICPARAMWRAPPER_H

