// Square.h
#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {
    class Square {
    private:
        double sideLength;

    public:
        Square();
        Square(double side);
        double getSideLength() const;
        void setSideLength(double side);
        ~Square();
    };
}

#endif // SQUARE_H
