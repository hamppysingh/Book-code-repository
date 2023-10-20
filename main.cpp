#include <iostream>
using namespace std;
#include "Book.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Book B(1001,"Web development fundamentals",1000);
	B.displaydetails();
	int bid;
	string bname;
	double price;
	cout<<" Enter the Book Id : ";
	cin>>bid;
	B.setBid(bid);
	cout<<" Enter the Book Name : ";
	cin>>bname;
	B.setBname(bname);
	cout<<" Enter the Book Price : ";
	cin>>price;
	B.setPrice(price);
	int Quantity=0;
	cout<<" Enter the quantity of the books : ";
	cin>>Quantity;
	B.acceptquantity(Quantity);
	cout<<" The total price of all books are : ";
	cout<<B.displayprice();
	return 0;
}
