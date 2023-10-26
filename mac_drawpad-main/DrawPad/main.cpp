#include <string>
#include "DrawPad.hpp"
#include <math.h>

void DrawMain()
{
    Clear(kColorBlack);
    int centerX = 0;
    int centerY = 0;
    int triangleRadius = 90;
    int invertedTriangleRadius = 90;
    
    //円を描画
    DrawCircle(0, 0, 30, kColorRed);
    
    // 中心に三角形を描画
    int x1 = centerX;
    int y1 = centerY - triangleRadius;

    int x2 = centerX - triangleRadius * sqrt(3) / 2;
    int y2 = centerY + triangleRadius / 2;

    int x3 = centerX + triangleRadius * sqrt(3) / 2;
    int y3 = centerY + triangleRadius / 2;
    
    DrawLine(x1, y1, x2, y2, kColorBlue);
    DrawLine(x2, y2, x3, y3, kColorBlue);
    DrawLine(x3, y3, x1, y1, kColorBlue);
    
    // 中心に逆三角形を描画
    int ix1 = centerX;
    int iy1 = centerY + invertedTriangleRadius;

    int ix2 = centerX - invertedTriangleRadius * sqrt(3) / 2;
    int iy2 = centerY - invertedTriangleRadius / 2;

    int ix3 = centerX + invertedTriangleRadius * sqrt(3) / 2;
    int iy3 = centerY - invertedTriangleRadius / 2;

    DrawLine(ix1, iy1, ix2, iy2, kColorBlue);
    DrawLine(ix2, iy2, ix3, iy3, kColorBlue);
    DrawLine(ix3, iy3, ix1, iy1, kColorBlue);
    
    
    //見たよーーーー
    DrawCircle(150, 150, 85, 0xaa00da);
    DrawCircle(200, 150, 85, 0xaa00da);
    DrawCircle(150, 200, 85, 0xaa00da);
}


