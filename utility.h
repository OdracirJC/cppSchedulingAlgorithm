#ifndef UTILITY_H
#define UTILITY_H
#include "process.h"
#include <algorithm>
#include <vector>

bool process_comp(process const &lhs, process const &rhs);
bool queueDone(std::vector<process> &taskQueueRef);
void addToTaskQueue(std::vector<process> &taskQueueRef,
                    std::vector<process> &processVectorRef, int &clock);
#endif