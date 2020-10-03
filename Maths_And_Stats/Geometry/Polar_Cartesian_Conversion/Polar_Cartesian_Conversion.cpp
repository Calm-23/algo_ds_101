#include <bits/stdc++.h>
using namespace std;

void conversion(float r, float theta){
	
	theta *= M_PI / 180; //converting degree into radian
	float x, y;
	
	//Conversion of polar coord. to Cartesian
	x = r * cos(theta); 
    	y = r * sin(theta);
    
    cout<<"x = " <<x<<"\ny = "<<y;
	
}
int main()
{
	float a, b;
	cout<<"Enter the Polar Coordinates(r, theta) : "<<endl;
	cin>>a>>b;
	conversion(a,b);
	return 0;
}
