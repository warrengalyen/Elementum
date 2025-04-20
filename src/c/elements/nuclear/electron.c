#include "../../color.h"
#include "../../fluidsim.h"
#include "../../main.h"
#include "../../random.h"
#include "../elements.h"
#include "../subatomics.h"


#define ELEMENT_NAME electron

_Bool VARPREF(attempt)(Element *el, Cell *cell, Cell *target) {
    return 0;
}

void VARPREF(update)(Element *el, Cell *cell, U16 x, U16 y) {
}

void VARPREF(init)(Element *el) {
    createSubatomic(el->cell->x, el->cell->y, 0xff);
    freeCell(el->cell);
}

ElementInfo VARPOST(info) = {
                             .attempt = VARPREF(attempt),
                             .handler = VARPREF(update),
                             .init = VARPREF(init),
                             .state = s_UNKNOWN,

                             .baseColor = TOHSL(1, 1, 1)};

#undef ELEMENT_NAME