#ifndef DATE_H
#define DATE_H
class Date //Class with private and public variables
{
    private:
        int month, day, year;
    public:
        Date(); 
        Date(int, int, int);
        bool setDate(int, int, int);
        void getDate(int&, int&, int&);
        void printShort();
        void printLong();
        //bool isEqual(Date);
        //void increment();
        //void decrement();
};

#endif
