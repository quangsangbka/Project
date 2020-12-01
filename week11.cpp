#include <iostream>
using namespace std;
struct Date{
	int day,month,year;
};
void set_date(Date&date,int d,int m,int y ){
	date.day=d;
	date.month=m;
	date.year=y;
}
void add_day(Date&date,int n){
	date.day+=n;
}
void add_month(Date&date,int n){
	date.month+=n;
}
void add_year(Date&date,int n){
	date.year+=n;
}
void display(Date&date){
	cout<<"ngay la: "<<date.day<<"\n";
	cout<<"thang la: "<<date.month<<"\n";
	cout<<"nam la: "<<date.year<<"\n";
}

int main(){
	Date d;
	set_date(d,12,9,2010);
	display(d);
	cout<<"thay doi ngay thang nam:\n";
	add_day(d,5);
	add_month(d,1);
	add_year(d,2);
	d.month=12;
	display(d);
	return 0;
}
