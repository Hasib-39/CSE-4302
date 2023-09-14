#include "Counter.h"

Counter::Counter() : count(0), incrementStep(1) {}

void Counter::setIncrementStep(int step_val) {
    if (step_val > 0) {
        incrementStep = step_val;
    }
}

int Counter::getCount() const {
    return count;
}

void Counter::increment() {
    count += incrementStep;
}

void Counter::resetCount() {
    count = 0;
}

Counter Counter::operator+(const Counter& other) const {
    Counter result;
    result.count = count + other.count;
    result.incrementStep = (incrementStep > other.incrementStep) ? incrementStep : other.incrementStep;
    return result;
}

Counter& Counter::operator+=(const Counter& other) {
    count += other.count;
    incrementStep = (incrementStep > other.incrementStep) ? incrementStep : other.incrementStep;
    return *this;
}

bool Counter::operator==(const Counter& other) const {
    return count == other.count;
}

bool Counter::operator!=(const Counter& other) const {
    return count != other.count;
}

bool Counter::operator>(const Counter& other) const {
    return count > other.count;
}

bool Counter::operator<(const Counter& other) const {
    return count < other.count;
}

bool Counter::operator>=(const Counter& other) const {
    return count >= other.count;
}

bool Counter::operator<=(const Counter& other) const {
    return count <= other.count;
}

Counter Counter::operator++(int) {
    Counter temp(*this);
    count += incrementStep;
    return temp;
}

Counter& Counter::operator++() {
    count += incrementStep;
    return *this;
}
