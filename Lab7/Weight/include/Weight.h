

class Weight {
private:
    const double kgToPound = 2.205;
    int pound;
    double ounce;

public:
    Weight();
    Weight(double kg);
    Weight(int pound, double ounce);
    void showWeight() const;
    operator double() const;
};

