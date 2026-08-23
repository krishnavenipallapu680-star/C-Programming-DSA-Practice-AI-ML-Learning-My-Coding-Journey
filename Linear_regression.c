#include <stdio.h>

int main() {
    
    double X[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    double Y[] = {50.0, 55.0, 65.0, 70.0, 85.0};
    int n = sizeof(X) / sizeof(X[0]);

    
    double weight = 0.0;
    double bias = 0.0;
    double learning_rate = 0.01;
    int epochs = 1000;

    
    for (int epoch = 0; epoch < epochs; epoch++) {
        double dw = 0.0;
        double db = 0.0;

        for (int i = 0; i < n; i++) {
            double y_pred = (weight * X[i]) + bias;
            double error = Y[i] - y_pred;

            dw += -2.0 * X[i] * error;
            db += -2.0 * error;
        }

        weight -= learning_rate * (dw / n);
        bias -= learning_rate * (db / n);
    }

    printf("Trained Weight (Slope): %.4f\n", weight);
    printf("Trained Bias (Intercept): %.4f\n", bias);

    
    double new_hours = 6.0;
    double prediction = (weight * new_hours) + bias;
    printf("Predicted score for %.1f hours: %.2f\n", new_hours, prediction);

    return 0;
}
