class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1=(ax2-ax1)*(ay2-ay1);
        int area2=(by2-by1)*(bx2-bx1);
        int ow=max(0,min(by2,ay2)-max(ay1,by1));//overlapping width
        int ol=max(0,min(bx2,ax2)-max(bx1,ax1));//overlapping length
        return area1+area2-(ow*ol);
    }
};