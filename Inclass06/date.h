#ifndef DATE_H
#define DATE_H
class Date
{
private:
	int month, day, year;
public:
	Date();
	Date(int, int, int);
	void printShort();
	void setDate(int, int, int);
	void increment();
	int getDate();
};

#endif
