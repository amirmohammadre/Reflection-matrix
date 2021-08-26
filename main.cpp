#include <bits/stdc++.h>

using namespace std;

int main() {

    int row,col;

    cout<<"Input the row: ";            cin>>row;
    cout<<"Input the column: ";         cin>>col; 

    if( row == col ) {
        
        bool M[row][col];

        cout<<endl<<"---Input the boolean matrix "<<row<<"x"<<col<<"---"<<endl;
        
        for(int i=0;i<row;i++)
            for(int j=0;j<col;j++)
                cin>>M[i][j];

        int diagonal;
        
        for(int i=0;i<row;i++) 
            if( M[i][i] == 1 )          diagonal++;

        if(diagonal == row)                       cout<<endl<<"There is a reflection property"<<endl;
        
        else {
            
            cout<<endl<<"There is no reflection property"<<endl;
            cout<<"reflection extension = { ";
            
            for(int i=0;i<row;i++) 
                if( M[i][i] == 0 ) 
                    cout<<"("<<i<<","<<i<<")"<<",";
            cout<<" \b\b }"<<"\n";
        }    
    }

    else {
        cout<<"Error: The matrix is not square"<<endl;
    }

    return 0;
}