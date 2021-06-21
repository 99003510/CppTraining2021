#ifndef COLOR_H
#define COLOR_H

enum colorType{red, green, blue};

class Color
{
    private:
          int red;
          int green;
          int blue;

    public:
        Color();
        Color(int,int,int); //r,g,b values
        Color(int); //Hex value as int
        Color(std::string); //Hex value as
        void invert();
        void display() const;


};

#endif // COLOR_H
