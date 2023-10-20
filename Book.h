
#include<string.h>
#include<iostream>
using namespace std;


class Book{
	int bid;
	string bname;
	double price;
	double totalprice;
	public:
		Book(int bid,string bname,double price);
		double displayprice();
		void acceptquantity(int num);
		void setPrice(double price);
		void setBname(string bname);
		void setBid(int bid);
		double getPrice();
		string getBname();
		int getBid();
		void displaydetails();
		~Book();
};

