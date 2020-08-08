#include <iostream>
using namespace std;
class Rectangle
{
    float length, breadth;
    public:
        Rectangle()
        {
            length = 1;
            breadth = 1;
        }
        void setLength()
        {
            float len;
            cout<<endl<<"Enter lenght : ";
            cin>>len;
            if(len < 0.0 && len > 20.0)
            {
                cout<<"Invalid Length ";
            }
            else
            {
                length = len;
            }
        }
        float getLength()
        {
            return length;
        }
        void setBreadth()
        {
            float bre;
            cout<<endl<<"Enter Breadth : ";
            cin>>bre;

            if(bre < 0.0 && bre > 20.0)
            {
                cout<<"Invalid Breadth ";
            }
            else
            {
                breadth = bre;
            }
        }
        float getBreadth()
        {
            return breadth;
        }
        void perimeter()
        {
            float Perimeter = 2.0 * (length + breadth);
            cout<<"Perimeter : "<<Perimeter;
        }
        void area()
        {
            float Area = (float) length * breadth;
            cout<<"Area : " <<area;
        }
};
int main()
{
    Rectangle R1;
    // Set Length
    R1.setLength();
    // Get Length
    cout<<endl<<"Length : "<<R1.getLength();

    // Set Breadth
    R1.setBreadth();
    // Get Breadth
    cout<<endl<<"Breadth : "<<R1.getBreadth();

    // Perimeter
    R1.perimeter();

    // Area
    R1.area();
    return 0;
}