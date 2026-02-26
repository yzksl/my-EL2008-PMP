/* Latihan based on the Module 2 slide. Check homework folder */

#include <stdio.h>

/* Transporation Method Constants */
typedef enum {
    CAR,
    BIKE,
    WALK
} TranspoMethod;

/* Function to choose which transporation method to choose based on rain probability. Returns the TranspoMethod constant */
TranspoMethod chooseTranspoMethod(int rain_prob) {
    if (rain_prob > 60) {
        return CAR;
    } else if (rain_prob > 30) {
        return BIKE;
    } else {
        return WALK;
    }
}

/* Checks if fuel is enough based on distance and fuel efficiency. Returns integer boolean */
int isFuelEnough(float fuel, float fuel_eff, float distance) {
    return fuel*fuel_eff > distance;
}

/* Returns distance remaining based on current distance, v, and t provided */
float distanceRemaining(float distance, float v, float t) {
    return distance - v*t;
}

/* Returns remaining fuel based on current fuel, travelled distance, and fuel efficiency */
float fuelRemaining(float fuel, float travelledDistance, float fuel_eff) {
    return fuel - travelledDistance / fuel_eff;
}

/* Input and verification input for rain probability */
int inputRainProb() {
    int rain_prob = -1;

    printf("Input the probability of rain in percentage without percent sign (e.x. 80 for 80%%):\n");
    scanf("%d", &rain_prob);
    while (rain_prob < 0 || rain_prob > 100) {
        printf("Invalid probability! Please input a valid probability:\n");
        scanf("%d", &rain_prob);
    }

    return rain_prob;
}

/* Input and verification input for float numbers */
float inputPhysicalNumber() {
    float number;
    scanf("%f", &number);
    while (number < 0) {
        printf("Invalid number! Please try again:\n");
        scanf("%f", &number);
    }

    return number;
}

/* Choose route, changes the current distance to the route provided */
void routeMethodInTraffic(float *distance, float fuel, float *fuel_eff) {
    printf("Warning: Traffic. Input new km/liter:\n");
    scanf("%f", fuel_eff);
    
    if (isFuelEnough(fuel, *fuel_eff, *distance)) {
        printf("Just sit out the traffic.\n");
    } else {
        printf("You need to find the nearest gas station or take an alternative route. What is the distance to alternative route right now?\n");
        float alt_distance = inputPhysicalNumber();

        if (isFuelEnough(fuel, *fuel_eff, alt_distance)) {
            printf("Take the alternative route.\n");
            *distance = alt_distance;
        } else {
            printf("Go to a gas station ASAP!\n");
        }
    }
}

/* When on the road with the car */
/* When there's traffic, then the program assumes there will be no more traffic (doesn't ask for v and t anymore for fuel calculation) because the question doesn't ask for a continuation. */
void onTheRoad(float *fuel_eff, float *distance, float *fuel) {
    float v, t;
    v = 1; t = 1;

    while (*distance > 0) {
        printf("Input <velocity, time> for this turn (e.x. 10 5). If there's a lot of traffic, input a negative number.\n");
        scanf("%f %f", &v, &t);

        if (v < 0 || t < 0) {
            break;
        }

        float prev_distance = *distance;
        *distance = distanceRemaining(*distance, v, t);
        float distanceTravelled = prev_distance - *distance;
        *fuel = fuelRemaining(*fuel, distanceTravelled, *fuel_eff);
    }

    if (*distance <= 0) {
        printf("\nYou've arrived!\n");
        return;
    }

    routeMethodInTraffic(distance, *fuel, fuel_eff);
}



int main() {
    /* 1a. */
    int rain_prob = inputRainProb();
    TranspoMethod method = chooseTranspoMethod(rain_prob);
    printf("\nYou should go by ");
    if (method == CAR) {
        printf("car.\n");
    } else if (method == BIKE) {
        printf("motorbike.\n");
    } else {
        printf("walking.\n");
    }
    
    /* 1b. */
    if (method == CAR) {
        float distance, fuel, fuel_eff;

        printf("Check if you have enough fuel. Input the <distance of campus and home (km), fuel you have (l), and km/liter (km/l)>. For example:\n10 1 1\n");
        scanf("%f %f %f", &distance, &fuel, &fuel_eff);

        if (isFuelEnough(fuel, fuel_eff, distance)) {
            printf("Silakan berangkat\n");
            
            /* 1c. */
            onTheRoad(&fuel_eff, &distance, &fuel);
        } else {
            printf("Bentar, isi bensin dulu!\n");
        }
    }

    return 0;
}