#include <iostream>
#include <string>
#include<vector>
using namespace std;

string day_of_the_week(int x,int y,int z) {
	int month =x;
	int _day =y;
	int year =z;

        vector<int> days={31,28,31,30,31,30,31,31,30,31,30,31};
        vector<string> dates={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
        int d = _day;
        for(int i = 0; i < month-1; i++) d += days[i];
        if ( ( ( year%4 == 0 && year%100 != 0) || year%400 == 0) && month > 2) d++;
        for(int i = 1971; i < year; i++) {
            if ( ( i%4 == 0 && i%100 != 0) || i%400 == 0) d += 366;
            else d += 365;
        }

        string result = dates[ ( d%7 + 3 ) % 7];
        return result;
    }
int main(){
   string date1;
   int x,y,z;
   cout<<"Enter the date to verify: \n";
   printf("Enter the month:");
   scanf("%d",&x);
   printf("Enter the day:");
   scanf("%d",&y);
   printf("Enter the year:");
   scanf("%d",&z);
   cout << "  Day of entered data is "<<day_of_the_week(x,y,z);
}
