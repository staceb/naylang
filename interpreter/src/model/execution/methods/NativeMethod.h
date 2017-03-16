//
// Copyright (c) 2017 by Borja Lorente.
// Distributed under the GPLv3 license.
//

#ifndef NAYLANG_NATIVEMETHOD_H
#define NAYLANG_NATIVEMETHOD_H

#include <model/execution/objects/GraceObject.h>
#include <model/evaluators/Evaluator.h>
#include "Method.h"

namespace naylang {

class NativeMethod : public Method {

public:

    virtual GraceObjectPtr respond(Evaluator &context, GraceObject &self) = 0;
    virtual GraceObjectPtr respond(Evaluator &context, GraceObject &self, MethodRequest &request) {
        return respond(context, self);
    }

};
} // end namespace naylang

#endif //NAYLANG_NATIVEMETHOD_H
