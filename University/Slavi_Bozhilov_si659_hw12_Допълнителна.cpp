#include <iostream>
using namespace std;
template<typename type>
type Max(type a, type b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
template<typename type>
type Min(type a, type b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}




template<typename type>
class Interval {
private:
    type from;
    type to;
public:
    Interval(type _from, type _to) :from(_from), to(_to) {};
    type getFrom() const
    {
        return from;
    }
    type getTo() const
    {
        return to;
    }
    int  getCount() const
    {
        int count = 0;
        for (type i = from; i <=to; i++)
        {
            count++;
        }
        return count;
    }
    bool includes(type value) const
    {
        for (type i = from; i <=to; i++)
        {
            if (value == i)
            {
                return true;
            }
        }
        return false;
    }
    void print() const
    {
        cout << "Interval [" << from << "," << to << "]" << endl;
        for (type i = from; i <=to; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    Interval<type> intersectionInterval(const Interval<type>& second) const
    {
        type maxFrom = Max(from, second.from);
        type minTo = Min(to, second.to);
        Interval<type>intersection(maxFrom, minTo);
        return intersection;
    }

    Interval<type> unionInterval(const Interval<type>& second) const
    {
        type minFrom = Min(from, second.from);
        type maxTo = Max(to, second.to);
        Interval<type>unionInterval(minFrom, maxTo);
        return unionInterval;
    }
};
int main()
{
    Interval<int>ex1(1, 5);
    Interval<char>ex2('a', 'g');
    cout << ex1.getCount() << endl;
    cout << ex1.getFrom() << endl;
    cout << ex1.getTo() << endl;
    if (ex1.includes(5) == true)
    {
        cout << "Interval includes 5" << endl;
    }
    else
    {
        cout << "Interval doesn't include 5" << endl;
    }
    ex1.print();
    auto intersection=ex1.intersectionInterval(Interval<int>(3, 7));
    intersection.print();
    auto unionInterval = ex1.unionInterval(Interval<int>(3, 7));
    unionInterval.print();
    cout << "****************************************" << endl;
    cout << ex2.getCount() << endl;
    cout << ex2.getFrom() << endl;
    cout << ex2.getTo() << endl;
    if (ex2.includes('c') == true)
    {
        cout << "Interval includes c" << endl;
    }
    else
    {
        cout << "Interval doesn't include c" << endl;
    }
    ex2.print();
    auto intersectionChar = ex2.intersectionInterval(Interval<char>('c','i'));
    intersectionChar.print();
    auto unionIntervalChar = ex2.unionInterval(Interval<char>('c', 'i'));
    unionIntervalChar.print();
}
