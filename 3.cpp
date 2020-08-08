#include <iostream>
using namespace std;
class Date
{
    int month, day, year;
    public:
        Date(int m, int d, int y)
        {
            day = d;
            year = y;
            if(m < 1 || m > 12)
            {
                month = 1;
            }
            else
            {
                month = m;
            }
        }
        void setMonth()
        {
            int m;
            cout<<endl<<"Enter Month : ";
            cin>>m;
            month = m;
        }
        int getMonth()
        {
            return month;
        }
        void setDay()
        {
            int d;
            cout<<endl<<"Enter Day : ";
            cin>>d;
            day = d;
        }
        int getDay()
        {
            return day;
        }
        void setYear()
        {
            int y;
            cout<<endl<<"Enter Year : ";
            cin>>y;
            year = y;
        }
        int getYear()
        {
            return year;
        }
        void display()
        {
            cout<<endl<<"Date : "<<getMonth()<<"/"<<getDay<<"/"<<getYear();
        }
};
int main()
{
    int m, d, y;
    cout<<endl<<"Enter initial Month, Date and year : ";
    cin>>m>>d>>y;
    Date D(m, d, y);
    
    // Initial date
    cout<<endl<<"Initial Date : ";  
    D.display();

    // Set Month
    D.setMonth();
    // Get Month   
    cout<<"Updated Month : "<<D.getMonth();

    // Set Day
    D.getDay();
    // Get Month
    cout<<endl<<"Updated Day : "<<D.getDay();

    // Set Year
    D.setYear();
    // Get Year
    cout<<endl<<"Updated Year : "<<D.getYear();
    cout<<endl<<"Updated Date : ";  
    D.display();
    return 0;
}
