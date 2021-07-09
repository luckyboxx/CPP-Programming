#include <iostream>
#include <math.h>
using namespace std;

struct point {
    int x, y;
};

double origin_distance(struct point *p);

int main() {
    struct point p[5];
    int cnt = 0;
    int cnt2 = 0;
    int n = 0;
    double dist[6] = { 0 };
    double tmp = 0;

    cout << "다음 5개의 좌표값을 아래에 각각 입력하시오." << endl;
    cout << "(2, 3), (1, 6), (-4, 2), (3, -3), (-2, -2)" << endl;
    cout << endl;

    for (cnt = 0; cnt < 5; cnt++) {
        cout << "p" << cnt + 1 << " >> ";
        cin >> p[cnt].x >> p[cnt].y;
        if (cnt2 <= cnt) {
            dist[cnt2] = origin_distance(&p[cnt2]);
            cnt2++;
        }
        cout << "원점거리 >> " << dist[cnt] << endl;
        cout << endl;
    }

    for (cnt2 = 0; cnt2 <= cnt;) {
        if (dist[cnt2] >= dist[cnt2 + 1]) {
            if (dist[cnt2 + 1] == 0 && n <= 10) {
                n += 1;
                cnt2 = 0;
                continue;
            }
            else if (dist[cnt] == 0 && cnt2 == cnt - 1)
                break;
            else if (cnt2 == cnt)
                break;
            
            tmp = dist[cnt2];
            dist[cnt2] = dist[cnt2 + 1];
            dist[cnt2 + 1] = tmp;

            tmp = p[cnt2].x;
            p[cnt2].x = p[cnt2 + 1].x;
            p[cnt2 + 1].x = tmp;

            tmp = p[cnt2].y;
            p[cnt2].y = p[cnt2 + 1].y;
            p[cnt2 + 1].y = tmp;
        }
        else
            cnt2++;
    }
    cout << endl;

    cnt2 = 0;
    if (cnt2 <= cnt) {
        cout << "원점과 가장 가까운 좌표값 >> ";
        cout << "(" << p[cnt2].x << ", " << p[cnt2].y << ")";
        cnt2++;
    }
    cout << endl << endl;
}

double origin_distance(struct point *p) {
    int cnt = 0;
    double dist = 0;
    dist = sqrt(pow(double)(p[cnt].x), 2) + pow((double)(p[cnt].y), 2);
    return dist;
}