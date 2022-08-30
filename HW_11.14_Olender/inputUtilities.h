//
// Created by PJ Olender on 8/28/22.
//

#ifndef HW_11_8_OLENDER_INPUTUTILITIES_H
#define HW_11_8_OLENDER_INPUTUTILITIES_H

#include "partsUtilities.h"

int validateInputForRange(int min, double max, int input);
int promptWhichPartToChange();
int promptAddRemovePart();
void processPartDecision(int input, Part array[]);

#endif //HW_11_8_OLENDER_INPUTUTILITIES_H
