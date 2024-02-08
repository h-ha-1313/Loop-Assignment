#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    int day, month, year;
    int nextDay, nextMonth, nextYear;
    int previousDay, previousMonth, previousYear;
    //cout<<"Enter day: ";
    cin>>day;
    //cout<<"Enter month: ";
    cin>>month;
    //cout<<"Enter year: ";
    cin>>year;

    if(month == 2){
        if(year%4==0 || year%400==0){
            if (day+1>29){
                //next
                nextDay == 1; nextMonth == 3; nextYear == year;
                //previous
                previousDay = day-1; previousMonth = 2; previousYear = year;
            }
        }
    }
    else
        switch(month){
            case 1:
                if(day==1){
                    nextDay = day+1; nextMonth = month; nextYear = year;
                    previousDay = 31; previousMonth = 12; previousYear = year-1;
                }
                else{
                    nextDay = day+1; nextMonth = month; nextYear = year;
                    previousDay == day+1; previousMonth = month; previousYear = year;
                }
                break;
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
                if(day==31){
                    nextDay = 1; nextMonth = month + 1; nextYear = year;
                    previousDay = day-1; previousMonth = month; previousYear = year;
                }
                else{
                    nextDay = day+1; nextMonth = month; nextYear = year;
                    previousDay == day+1; previousMonth = month; previousYear = year;
                }
                break;
            
            case 4:
            case 6:
            case 9:
            case 11:
                if(day==30){
                    nextDay = 1; nextMonth = month + 1; nextYear = year;
                    previousDay = day-1; previousMonth = month; previousYear = year;
                }
                else{
                    nextDay = day+1; nextMonth = month; nextYear = year;
                    previousDay == day+1; previousMonth = month; previousYear = year;
                }
                break;

            case 12:
                if(day==31){
                    nextDay = 1; nextMonth = 1; nextYear = year+1;
                    previousDay = day-1; previousMonth = month; previousYear = year;
                }
                else{
                    nextDay = day+1; nextMonth = month; nextYear = year;
                    previousDay == day+1; previousMonth = month; previousYear = year;
                }
                break;
        }

    cout<<"Next date: "<< nextDay<<" "<< nextMonth<<" "<< nextYear<<endl;
    cout<<"Previous date: "<< previousDay<<" "<< previousMonth<<" "<< previousYear<<endl;
}
