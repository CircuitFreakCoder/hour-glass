#include <iostream>

using namespace std;

void hour_glass(int n)
{
    int x = 5 + 2*(n-3); //actual width of the hour glass
    int m = (x/2) + 1; //median

    for(int i=1; i<=x; i++) //first for loop
    {
        for(int j=1; j<= x; j++) //second for loop
        {   
            //upper region
            if((i%2==1 && j%2==1 && j>=i && i<=m && i+j<= x+1)
            || (i%2==0 && j%2==0 && j>=i && i<=m && i+j<= x+1))

                cout<<"X";

            //lower region
            else if((i%2==1 && j%2==1 && i+j>=x+1 && i>m && j<=i)
            || (i%2==0 && j%2==0 && i+j>=x+1 && i>m && j<= i))

                cout<<"X";

            else
                cout<<" ";

        }
        cout<<endl;
        cout<<endl;
    }


}


int main()
{
    int n=0;

    do{
    cout << "Enter a  number: ";

    cin>>n;
    cout<<endl;
    hour_glass(n);
    }while(n >= 0);
    return 0;
}
