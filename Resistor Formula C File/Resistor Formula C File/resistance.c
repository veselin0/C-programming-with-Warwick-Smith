/*
 * resistance.c
 *
 * Created: 5/15/2024 3:09:56 PM
 *  Author: Vesko
 */ 
float parallelRes( float res1, float res2){
	float result = (res1 * res2) / (res1 + res2);
	return result;
}

float serialRes(float res1, float res2, float res3) {
	return (res1 + res2 + res3);
}
