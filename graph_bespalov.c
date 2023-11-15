#include <stdio.h>
#include <math.h>

double F1(double x) {
    return x * atan(x) - log(sqrt(1 + x * x));
}

int main() {
    FILE *gnuplotPipe = popen("gnuplot -persistent", "w");

    fprintf(gnuplotPipe, "set terminal png\n");
    fprintf(gnuplotPipe, "set output 'graph.png'\n");
    fprintf(gnuplotPipe, "set title 'Graph of F1(x)'\n");
    fprintf(gnuplotPipe, "set xlabel 'x'\n");
    fprintf(gnuplotPipe, "set ylabel 'F1(x)'\n");
    fprintf(gnuplotPipe, "plot '-' with lines title 'y = x * atan(x) - log(sqrt(1 + x * x))'\n");

    for (double x = -10; x <= 10; x += 0.1) {
        fprintf(gnuplotPipe, "%f %f\n", x, F1(x));
    }

    fprintf(gnuplotPipe, "e\n");

    fclose(gnuplotPipe);

    return 0;
}

