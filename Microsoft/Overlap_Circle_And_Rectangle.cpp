/*You are given a circle represented as (radius, xCenter, yCenter) and an axis-aligned rectangle represented as (x1, y1, x2, y2), where (x1, y1) are the coordinates of the bottom-left corner, and (x2, y2) are the coordinates of the top-right corner of the rectangle.
Return true if the circle and rectangle are overlapped otherwise return false. In other words, check if there is any point (xi, yi) that belongs to the circle and the rectangle at the same time.*/

/*Approach: find the nearest point between (x1,x2) and (y1,y2) from the center of the circle(xcenter,ycenter)
  minX & minY store the squared distances for the x and y axes, respectively
 The circle overlaps the rectangle if the sum of these squared distances is less than or equal to the square of the radius (rad * rad).*/

#include<iostream>
using namespace std;
class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2){
        int xa = x1-xCenter,xb = x2-xCenter;
        int ya = y1-yCenter,yb = y2-yCenter;

        int minx = 0;
        if(xa*xb>0){
            minx = min(xa*xa,xb*xb);
        }
        int miny = 0;
        if(ya*yb>0){
            miny = min(ya*ya,yb*yb);
        }
        return minx+miny <= radius*radius;

    }

}; 
int main() {
    Solution s;
    int radius, xCenter, yCenter, x1, y1, x2, y2;

    
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Enter x and y coordinates of the circle's center: ";
    cin >> xCenter >> yCenter;

    
    cout << "Enter bottom-left corner coordinates (x1, y1) of the rectangle: ";
    cin >> x1 >> y1;
    cout << "Enter top-right corner coordinates (x2, y2) of the rectangle: ";
    cin >> x2 >> y2;

    
    if (s.checkOverlap(radius, xCenter, yCenter, x1, y1, x2, y2)) {
        cout << "The circle overlaps with the rectangle." << endl;
    } else {
        cout << "The circle does not overlap with the rectangle." << endl;
    }

    return 0;
}