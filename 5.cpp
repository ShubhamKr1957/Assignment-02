#include <iostream>
#include <math.h>
using namespace std;
class Rectangle
{
    float x[4], y[4];
    public:
    Rectangle()
    {
        setfunc();
    }
    void setfunc()
    {
        for(int i = 0; i < 4; i++)
        {
            cout<<endl<<"Enter Co-ordinate no. "<<i + 1<<" : ";
            cin>>x[i]>>y[i];

            // Checking co-ordinates
            if(x[i] > 20.0 || x[i] < 0 || y[i] > 20.0 || y[i] < 0 )
            {
                cout<<"Invalid Co-ordinates - Input again";
                i--;
            }
        }
        // Verifying if it forms an rectangle or not
        for(int i = 0; i < 4; i++)
        {
            float dis[4];
            dis[0] = sqrt(pow((x[1] - x[0]), 2) + sqrt(pow((y[1] - y[0]), 2)));
            dis[1] = sqrt(pow((x[2] - x[1]), 2) + sqrt(pow((y[2] - y[1]), 2)));
            dis[2] = sqrt(pow((x[3] - x[2]), 2) + sqrt(pow((y[3] - y[2]), 2)));
            dis[3] = sqrt(pow((x[3] - x[1]), 2) + sqrt(pow((y[3] - y[1]), 2)));

            int flag = 0;
            if(flag == 0 && dis[0] != dis[1] && dis[0] != dis[2] && dis[0] != dis[3])
            {
                flag = 1;
            }
            if(flag == 0 && dis[1] != dis[0] && dis[1] != dis[2] && dis[1] != dis[3])
            {
                flag = 1;
            }
            if(flag == 0 && dis[2] != dis[0] && dis[2] != dis[1] && dis[2] != dis[3])
            {
                flag = 1;
            }
            if(flag == 0 && dis[3] != dis[0] && dis[3] != dis[2] && dis[3] != dis[1])
            {
                flag = 1;
            }
            if(flag == 1 || dis[0] == 0 || dis[1] == 0 || dis[2] == 0 || dis[3] == 0)
            {
                cout<<endl<<"Cannot form a rectangle ";
                x[0] = 0, x[1] = 0, x[2] = 0, x[3] = 0;
                y[0] = 0, y[1] = 0, y[2] = 0, y[3] = 0;
            }
        }
    }
    void length()
    {
        float dis[4];
        dis[0] = sqrt(pow((x[1] - x[0]), 2) + sqrt(pow((y[1] - y[0]), 2)));
        dis[1] = sqrt(pow((x[2] - x[1]), 2) + sqrt(pow((y[2] - y[1]), 2)));
        dis[2] = sqrt(pow((x[3] - x[2]), 2) + sqrt(pow((y[3] - y[2]), 2)));
        dis[3] = sqrt(pow((x[3] - x[1]), 2) + sqrt(pow((y[3] - y[1]), 2)));

        if(dis[0] == 0)
        {
            cout<<endl<<"Rectangle cannot be formed ";
        }
        else
        {
            float max = dis[0];
            for(int i = 1; i < 4; i++)
            {
                if(dis[i] > max)
                {
                    max = dis[i];
                }
            }
            cout<<"Length : "<<max;
        } 
    }
    void breadth()
    {
        float dis[4];
        dis[0] = sqrt(pow((x[1] - x[0]), 2) + sqrt(pow((y[1] - y[0]), 2)));
        dis[1] = sqrt(pow((x[2] - x[1]), 2) + sqrt(pow((y[2] - y[1]), 2)));
        dis[2] = sqrt(pow((x[3] - x[2]), 2) + sqrt(pow((y[3] - y[2]), 2)));
        dis[3] = sqrt(pow((x[3] - x[1]), 2) + sqrt(pow((y[3] - y[1]), 2)));

        if(dis[0] == 0)
        {
            cout<<endl<<"Rectangle cannot be formed ";
        }
        else
        {
            float min = dis[0];
            for(int i = 1; i < 4; i++)
            {
                if(dis[i] < min)
                {
                    min = dis[i];
                }
            }
            cout<<"Breadth : "<<min;
        } 
    }
    void perimeter()
    {
        float dis[4];
        dis[0] = sqrt(pow((x[1] - x[0]), 2) + sqrt(pow((y[1] - y[0]), 2)));
        dis[1] = sqrt(pow((x[2] - x[1]), 2) + sqrt(pow((y[2] - y[1]), 2)));
        dis[2] = sqrt(pow((x[3] - x[2]), 2) + sqrt(pow((y[3] - y[2]), 2)));
        dis[3] = sqrt(pow((x[3] - x[1]), 2) + sqrt(pow((y[3] - y[1]), 2)));

        if(dis[0] == 0)
        {
            cout<<endl<<"Rectangle cannot be formed ";
        }
        else
        {
            float min = dis[0], max = dis[0];
            for(int i = 1; i < 4; i++)
            {
                if(dis[i] < min)
                {
                    min = dis[i];
                }
                if(dis[i] > max)
                {
                    max = dis[i];
                }
            }
            cout<<"Perimeter : "<<(2.0 * (min + max));
        } 
    }
    void area()
    {
        float dis[4];
        dis[0] = sqrt(pow((x[1] - x[0]), 2) + sqrt(pow((y[1] - y[0]), 2)));
        dis[1] = sqrt(pow((x[2] - x[1]), 2) + sqrt(pow((y[2] - y[1]), 2)));
        dis[2] = sqrt(pow((x[3] - x[2]), 2) + sqrt(pow((y[3] - y[2]), 2)));
        dis[3] = sqrt(pow((x[3] - x[1]), 2) + sqrt(pow((y[3] - y[1]), 2)));

        if(dis[0] == 0)
        {
            cout<<endl<<"Rectangle cannot be formed ";
        }
        else
        {
            float min = dis[0], max = dis[0];
            for(int i = 1; i < 4; i++)
            {
                if(dis[i] < min)
                {
                    min = dis[i];
                }
                if(dis[i] > max)
                {
                    max = dis[i];
                }
            }
            cout<<"Perimeter : "<<(1.0 * (min * max));
        }
    }
};
int main()
{
    Rectangle R1;
    // Length 
    R1.length();
    // Breadth
    R1.breadth();

    // Perimeter
    R1.perimeter();
    // Area
    R1.area();

    return 0;
}