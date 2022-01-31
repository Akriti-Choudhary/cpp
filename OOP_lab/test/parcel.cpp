// Akriti Choudhary
// 2005776

#include <iostream>

using namespace std;

class parcel_776
{
    int weight_776;

protected:
    float shipping_cost_776;

public:
    parcel_776()
    {
        weight_776 = 0;
    }

    parcel_776(int we_776)
    {
        weight_776 = we_776;
    }

    void calshipping_776()
    {
        shipping_cost_776 = 10 * weight_776;
    }
};
class box_776 : public parcel_776
{
    int no_of_boxes_776;

public:
    box_776(int we_776) : parcel_776(we_776)
    {
        if ((we_776 > 30) && (we_776 < 50))
        {
            no_of_boxes_776 = 2;
        }
        else if (we_776 >= 50)
        {
            no_of_boxes_776 = 5;
        }
        else
        {
            no_of_boxes_776 = 1;
        }
    }
    void calshipping_776()
    {
        parcel_776::calshipping_776();
        if (no_of_boxes_776 > 3)
        {
            shipping_cost_776 += 30;
        }
    }
    void display()
    {
        cout << "number of boxes : " << no_of_boxes_776 << endl;
        cout << "Shipping cost : " << shipping_cost_776 << endl;
    }
};
int main()
{
    int we_776;
    cout << "enter the weight : ";
    cin >> we_776;

    box_776 Akriti(we_776);

    Akriti.calshipping_776();
    Akriti.display();

    return 0;
}