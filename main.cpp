//Author: Matthew Burns
#include <iostream>
#include <vector>

using namespace std;

int main () {

    vector<vector<int> >Table;
    Table.resize(12);

    for(int row=0; row<Table.size(); row++)
    {
        Table[row].resize(12);
        
        for(int column=0; column<Table[row].size(); column++)
        {
            Table[row][column] = (row + 1)*(column + 1);
            
            cout<<Table[row][column] << " | ";

        }
        cout << endl;

    }

return 0;
}


