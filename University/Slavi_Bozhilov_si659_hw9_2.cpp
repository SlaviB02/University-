#include <iostream>
#include<string>
using namespace std;
class receipt 
{
private:
    string name; 
    double* prices{ nullptr };
    int count{ 0 };
public:
    receipt() 
    {
        name = "TMarket";
        prices = new double[2]{ 4,6 };
        count = 2;
    }
    receipt(string aname, double aprices[], int n) {
        name = aname;
        prices = new double[n];
        count = n;
        for (int i{ 0 }; i < count; i++) {
            prices[i] = aprices[i];
        }
    }
    ~receipt() {
        if (prices != nullptr) {
            delete[] prices;
            prices = nullptr;
        }
    }
    double getPrice(int i) {
        if (i < count) {
            return prices[i];
        }
        else {
            cout << "Invalid Index\n";
            exit(EXIT_FAILURE);
        }
    }
    receipt& setPrice(int i, double value) {
        if (i < count) {
            prices[i] = value;
        }
        else {
            cout << "Invalid index " << i << " Price is not changed\n";
        }
        return *this;

    }
    receipt& setName(string value) {
        name = value;
        return *this;
    }
    string getName() {
        return name;
    }
    string toString() {
        string result;
        result = "Shop " + name+"\n";
        for (int i = 0; i < count; i++)
        {
            result += "Stock#" + to_string(i+1) +" "+ to_string(prices[i]) + "\n";
        }
        return result;

    }
    receipt& add(double new_price) {
        double* newPrices = new double[count + 1];
        for (int i{ 0 }; i < count; i++) {
            newPrices[i] = prices[i];
        }
        newPrices[count] = new_price;
        count++;
        delete[] prices;
        prices = newPrices;
        return *this;

    }
    receipt& remove(int index)
    {
        double* newPrices = new double[count-1];
        int c = 0;
        for (int i{ 0 }; i < count; i++) 
        {
            
            if (i == index)
            {
                
            }
            else 
            {
                newPrices[c] = prices[i];
                c++;
            }
               
        }
        count--;
        delete[] prices;
        prices = newPrices;
        return *this;

    }
    double total()
    {
        double sum = 0;
        for (int i = 0; i < count; i++)
        {
            sum += prices[i];
        }
        return sum;
    }
    void discount(int index,double percent)
    {
        prices[index] = prices[index] - (prices[index] * percent / 100);
        
    }
};
int main()
{
    system("chcp 1251>nul");
    receipt r1;
    cout << "Обект, създаден с конструктора по подразбиране\n";
    cout << r1.toString() << endl;
    r1.setName("Billa").add(3).add(6).add(4);
    cout << "След задаване на име и  добавяне на 3 цени\n";
    cout << r1.toString() << endl;
    cout << endl;

    receipt r2{ "Lidl", new double[6]{1,2,3,4,5,6}, 6 };
    cout << "Обект, създаден с конструктора с параметри\n";
    cout << r2.toString() << endl;
    cout << "След сменяне на цените\n";
    r2.setPrice(1, 20).setPrice(5, 40);
    cout << r2.toString() << endl;
    cout << endl;
    cout << "След махане на 1 цена\n";
    r2.remove(0);
    cout << r2.toString() << endl;
    cout << "Цена на цялата стока " << r2.total() << endl;
    cout << endl;
    cout << "Discount на две стока" << endl;
    r2.discount(4, 50);
    r2.discount(3, 50);
    cout << r2.toString() << endl;
}
