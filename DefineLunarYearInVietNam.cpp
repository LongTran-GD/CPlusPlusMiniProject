#pragma warning(disable : 4996)
#include<iostream>
#include<string>

//#include <typeinfo>

using namespace std;
string toDefineYear(int year)
{
	string can[] = { "Canh", "Tan", "Nham", "Quy","Giap", "At", "Binh", "Dinh", "Mau", "Ky " };
	string chi[] = { "Ty", "Suu", "Dan", "Mao", "Thin", "Ti", "Ngo", "Mui", "Than", "Dau", "Tuat", "Hoi" };
	return can[year % 10] + " "+ chi[year % 12];

}
int main() {
    time_t now = time(0); // get current date and time  

    cout << "Number of seconds since January 1,2021 is:: " << now << endl;

    tm* ltm = localtime(&now);
   // cout << typeid(1900 + ltm->tm_year).name(); // cout type of data

    cout<<"Year: "<< 1900 + ltm->tm_year<<"_ "<<toDefineYear(1900 + ltm->tm_year);
}