#include "Book.h"
Book::Book(int bid,string bname,double price)
{
	this->bid=bid;
	this->bname=bname;
	this->price=price;
}


public Book::int getBid()
{
	return bid;
}
public Book::string getBname()
{
	return bname;
}
public Book::double getPrice()
{
	return price;
}
public Book::void setBid(int bid)
{
	this->bid=bid;
}
public Book::void setBname(string bname)
{
	this->bname=bname;
}
public Book::void setPrice(double price)
{
	this->price=price;
}
public Book::void acceptquantity(int num)
{
	totalprice=price*num;
}
public Book::double displayprice()
{
	return totalprice;
}
public Book::void displaydetails(){
	cout<<" The book id is : "<<bid<<" and the name is : "<<bname<<" only of Rs. "<<price<<endl;
}
