#ifndef PENCIL_H
#define PENCIL_H

#include <string>
using namespace std;


class Pencil
{
    public:
        Pencil();
        Pencil (string color);
        Pencil (string color, int length);
        virtual ~Pencil();

        Pencil &operator = (const Pencil & other);

        int get_length();

        void set_length(int new_length);

        string get_color();

        void set_color(string new_color);

        void print_info();

    protected:

    private:
        int m_length;
        string m_color;
};

#endif // PENCIL_H
