#ifndef COUNTER_H
#define COUNTER_H

class Counter {
private:
    int count;
    int incrementStep;

public:
    Counter();
    void setIncrementStep(int step_val);
    int getCount() const;
    void increment();
    void resetCount();

    // Operator overloads
    Counter operator+(const Counter& other) const;
    Counter& operator+=(const Counter& other);
    bool operator==(const Counter& other) const;
    bool operator!=(const Counter& other) const;
    bool operator>(const Counter& other) const;
    bool operator<(const Counter& other) const;
    bool operator>=(const Counter& other) const;
    bool operator<=(const Counter& other) const;
    Counter operator++(int);  // Postfix increment
    Counter& operator++();     // Prefix increment
};

#endif
