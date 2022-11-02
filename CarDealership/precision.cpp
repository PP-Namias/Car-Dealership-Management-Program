#include <iomanip>
#include <iostream>
#include <locale>

using namespace std;

int main()
{
    struct group_facet : public std::numpunct<char> {
    protected:
        string do_grouping() const { return "\003"; }
    };

    cout.imbue(locale(cout.getloc(), new group_facet));

    cout << fixed <<  1234567890 << '\n';
}