int add(int num, int num2){
    return num + num2;
}

int substract(int num, int num2){
    return num - num2;
}

int multiply(int num, int num2){
    return num * num2;
}

float divide(float num, float num2){
    if ( num2 == 0 ){
        return 0.0f;
    }
    return num / num2;
}
