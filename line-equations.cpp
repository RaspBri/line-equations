
/*
    Program takes in slope and point (from a line) input from user,
    as a result the program outputs the point-slope and
    slope-intercept form equations of a line.
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Prototype functions for point-slope form and slope-intercept form.

void displayPtSlopeForm(double slope, double xCoord, double yCoord);
void displaySlopeIntForm(double slope, double xCoord, double yCoord);

int main()
{

    // Set variables.

    double slope, xCoord, yCoord;
    char leftParentheses, comma;

    // Prompt user for slope of line and coordinates of a point.

    cout << "Given the slope of a line and the x and y coordinates of a point on the line," << endl
         << "this program will display the equation of the line in both point-slope form" << endl
         << "and slope-intercept form" << endl << endl;

    cout << "Enter the slope of a line: ";
    cin >> slope;

    cout << "Enter a point on the line [in (x,y) form]: ";
    cin >> leftParentheses >> xCoord >> comma >> yCoord; // Omits the parentheses and comma by turning them into seperate values

    // Calling the Point slope form and Slope int form functions.

    displayPtSlopeForm(slope, xCoord, yCoord);
    displaySlopeIntForm(slope, xCoord, yCoord);

    return 0;
} // end of Main function.

/*
    This function will convert the giving input into Point-Slope form
    with the correct signs. The function takes in doubles of slope,
    xCoord, and yCoord. As a result, the function outputs the
    point-slope form. The function does not return any values.
 */

void displayPtSlopeForm(double slope, double xCoord, double yCoord)
{
    cout << endl << "Point-slope form:\n";
    cout << "y ";

    if(yCoord < 0) // Check the value of yCoord to determine sign.
    {
        cout << "+ " << setprecision(2) << fixed << abs(yCoord);
    }
    else
    {
        cout << "- " << setprecision(2) << fixed << yCoord;
    }

    cout << " = " << slope << setprecision(2) << fixed << "(x ";

    if(xCoord < 0) // Check value of xCoord to determine sign.
    {
        cout << "+ " << setprecision(2) << fixed << abs(xCoord);
    }
    else
    {
        cout << "- " << setprecision(2) << fixed << xCoord;
    }

    cout << ")" << endl << endl;

} // end of displayPtSlopeForm function.

/*
   This function will convert the giving input into Slope-Intercept form
   with the correct signs. The function takes in doubles of slope,
   xCoord, and yCoord. As a result, the function outputs the
   Slope-intercept form. The function does not return any values.
*/

void displaySlopeIntForm(double slope, double xCoord, double yCoord)
{
    cout << "Slope-intercept form:\ny = ";

    cout << slope << "x ";

    xCoord = (slope * xCoord); // FOIL out xCoord's value.
    if(yCoord > 0) // Check value of yCoord to determine if a negative sign is needed.
    {
        xCoord = yCoord - xCoord;
        if(xCoord < 0) // Check xCoord's values to determine if positive sign is needed.
        {
            cout << "- " << abs(xCoord) << endl;
        }
        else
        {
            cout << "+ " << xCoord << endl;
        }
    }
    else
    {
        xCoord -= yCoord;
        cout << "- " << xCoord << endl;
    }

} // end of displaySlopeIntForm function.
