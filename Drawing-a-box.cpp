#include <iostream>
#include <string>
using namespace std;

//Function prototype
void box(int w, int h);

//main function 
int main() {

	int w, h;

	cout << " Ibtisam Sheikh " << endl;

	cout << " Please enter a number for the box width" << endl;
	cin  >> w;
	
	cout << " please enter a number for the box height" << endl;
	cin  >> h;

	box(w, h); //calling the box function 
	cout << "Thank you :)" << endl;
	
	return 0;
}

//box function 
void box(int w, int h) 
{
	char TopLeft = 218; // creating variables to store ascii characetrs 
	char TopRight = 191;
	char HorzEdge = 196;
	char BottomLeft = 192 ;
	char BottomRight = 217 ;
	char VertEdge = 179;
	
	//using nested for-loops for output
	for (int row = 0; row < w; row++) // This outer for-loop prints 1 row of output per iteration
	{		
		for (int col = 0; col < h; col++) // This inner for-loop prints 1 column per iteration
		{
		    if (row == 0 || row==w-1)
			{
				if (col==0 && row==0)
					cout << TopLeft;  //top left
					
				else if (col==0 && row==w-1)
					cout << BottomLeft; //bottom left
					
				else if (col==h-1 && row==0) //top right
					cout << TopRight;
					
				else if (col==h-1 && row==w-1) //bottom right
					cout << BottomRight;

				else 
				{
					cout << HorzEdge; //horizontal edge
				}	
			}	
		
			else if (col == 0 || col==h-1)
			{
				
				cout << VertEdge; //vertical edge 
			}
				
			else 
				cout << " ";
		}

		cout<<endl;//new line when the characters are printed horizontally once
	}
}
