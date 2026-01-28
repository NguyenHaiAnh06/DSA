#include <cmath>
#include <iostream>
#include <iostream>
#include <iomanip>
#include<stdlib.h>
#include<time.h>
using namespace std;

void matrannho(double a[10][10], double temp[10][10],
              int p, int q, int n) {
    int i = 0, j = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row != p && col != q) {
                temp[i][j++] = a[row][col];
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}
double det(double a[10][10], int n) {
    if (n == 1) return a[0][0];
    if (n == 2)
        return a[0][0]*a[1][1] - a[0][1]*a[1][0];

    double temp[10][10];
    double d = 0;
    int sign = 1;

    for (int f = 0; f < n; f++) {
        matrannho(a, temp, 0, f, n);
        d += sign * a[0][f] * det(temp, n - 1);
        sign = -sign;
    }
    return d;
}
void matranphuhop(double a[10][10], double adj[10][10], int n) {
    if (n == 1) {
        adj[0][0] = 1;
        return;
    }
    double temp[10][10];
    int sign;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrannho(a, temp, i, j, n);
            sign = ((i + j) % 2 == 0) ? 1 : -1;
            adj[j][i] = sign * det(temp, n - 1); 
        }
    }
}
int main() {
    int n;
    cin >> n;
    #ifndef ONLINE_JUDGE
    freopen("daisoinp.txt","r",stdin);
    freopen("daisoout.txt","w",stdout);
    #endif
    srand(time(NULL));
    double a[10][10], adj[10][10], ibv[10][10];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    double d = det(a, n);
    if (d == 0) {
        cout << "Ma tran khong co nghich dao!\n";
        return 0;
    }

    matranphuhop(a, adj, n);
    cout << "Ma tran nghich dao:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ibv[i][j] = adj[i][j] / d;
            cout << fixed << setprecision(3) << ibv[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
