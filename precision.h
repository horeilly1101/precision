//
// Created by Hugh O'Reilly on 2/8/20.
//

#ifndef PRECISION_PRECISION_H
#define PRECISION_PRECISION_H

#endif //PRECISION_PRECISION_H

struct PreciseInteger {
    int value;
    struct PreciseInteger *rest;
};
typedef struct PreciseInteger *Integer;
