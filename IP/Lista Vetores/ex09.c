// Distância entre pontos 3D - ex9
#include <stdio.h>
#include <math.h>

double distancia(double ax, double ay, double az, double bx, double by, double bz){
    double x, y, z, distancia;
    
    x = pow((ax - bx), 2);
    y = pow((ay - by), 2);
    z = pow((az - bz), 2);
    distancia = sqrt(x + y + z);
    
    return distancia;
}

main(){
    int n, i;
    scanf("%d", &n);
    double X[n];
    double Y[n];
    double Z[n];
    double dist;
    
    for(i = 0; i < n; i++){
        scanf("%lf", &X[i]);
        scanf("%lf", &Y[i]);
        scanf("%lf", &Z[i]);
    }
    
    for(i = 0; i < (n - 1); i++){
        dist = distancia(X[i], Y[i], Z[i], X[i + 1], Y[i + 1], Z[i + 1]);
        printf("%.2lf\n", dist);
    }
}