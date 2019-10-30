//Written by Dylan Griffioen
//contains functions for an array template that can add values, remove values and check if the value already exists in the array
//
//#include "set.hpp"
//
///*
//function that adds a value to the array
//first of all it checks if the value isn't already in the array
//then it checks how many valid items are in the array to see if there is space left
//and then if there is space left and it's not already in the array it sets the new value on index validItems+1
//*/
//void set::add( int n ){
//	if(used < 10){
//		if(!contains(n)){
//			data[used++] = n;
//		}
//	}
//}
//
///*
//function that removes a value from the array
//this works by looping through the array with 2 indexes
//it wil write array element i to array element w
//then it checks if array element w is not n
//if they aren't the same it wil increase w by 1 and start the next loop
//if the value we want to remove isn't in the array it wil just write all the values to their origional place
//so value 0 to space 0, value 1 to space 1, value 2 to space 2 enz....
//but if the value with index w is the same as n it wil not increase w
//this wil cause all the values after the one we want to remove to move left one space
//so let's say we wanted to remove value 3
//it will write 1 to 1, 2 to 2, 3 to 3, 4 to 3, 5 to 4 enz....
//and now it has removed value 3 from the array by overwriting it with value 4
//*/
//void set::remove( int n ){
//	int w = 0;
//	for( int i = 0; i < used; ++i ){
//		data[ w ] = data[ i ];
//		if( data[ w ] != n ){
//			++w;
//		}
//	}
//	used = --w;
//}
//
//
///*
//loops through the legit values in the array and returns wether or not value n is present in the array
//*/
//bool set::contains(int n){
//	for(int i =0; i <= used; i++){
//		if(data[i] == n){return true;}
//	}
//	return false;
//}