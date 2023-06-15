#include <stdio.h>
#include <stdlib.h>
#include "DynamicArray.h"
//#include "StaticArray.h"
// include the library you want to test

int main(int argc, char *argv[]) {
	int i, key;
    bool checker;
    List staticList;
    List dynamicList;
    
    // Static List 
//    initList(&staticList);
//    displayList(staticList);
//    staticList = newList();
//    displayList(staticList);
//    checker = insertFront(&staticList, 50);
//    (checker) ? displayList(staticList) : printf("Something went wrong or the array is full\n");
//    checker = insertFront(&staticList, 10);
//    (checker) ? displayList(staticList) : printf("Something went wrong or the array is full\n");
//    checker = insertRear(&staticList, 15);
//    (checker) ? displayList(staticList) : printf("Something went wrong or the array is full\n");
//    checker = insertRear(&staticList, 50);
//    (checker) ? displayList(staticList) : printf("Something went wrong or the array is full\n");
//    checker = insertAt(&staticList, 30, 3);
//    (checker) ? displayList(staticList) : printf("Something went wrong, the array is full or invalid location\n");
//    checker = insertRear(&staticList, 8);
//    (checker) ? displayList(staticList) : printf("Something went wrong or the array is full\n");
//    checker = insertRear(&staticList, 4);
//    (checker) ? displayList(staticList) : printf("Something went wrong or the array is full\n");
//    checker = searchItem(staticList, 50);
//    (checker) ? printf("Key Found\n") : printf("Key not found\n");
//    key = deleteAllItem(&staticList, 50);
//    if(key != -1) {
//    	printf("Successfully Removed All Keys: %d\n", key);
//    	displayList(staticList);
//	}else {
//		printf("Something went wrong, the array is empty or key not found\n");
//	}
////    i = getItem(staticList, 10);
////    (i == -1) ? printf("Key not Found\n") : printf("Key Retrieved: %d\n", i);
////    checker = deleteFront(&staticList);
////    if(checker) {
////    	printf("Successfully Removed Front\n");
////    	displayList(staticList);
////	}else {
////		printf("Something went wrong or the array is empty\n");
////	}
////	checker = deleteRear(&staticList);
////    if(checker) {
////    	printf("Successfully Removed Rear\n");
////    	displayList(staticList);
////	}else {
////		printf("Something went wrong or the array is empty\n");
////	}
////	checker = deleteAt(&staticList, 1);
////    if(checker) {
////    	printf("Successfully Removed\n");
////    	displayList(staticList);
////	}else {
////		printf("Something went wrong, the array is empty or invalid location\n");
////	}
////	checker = deleteItem(&staticList, 50);
////    if(checker) {
////    	printf("Successfully Removed\n");
////    	displayList(staticList);
////	}else {
////		printf("Something went wrong, the array is empty or invalid location\n");
////	};
	
	//Dynamic Array
    initList(&dynamicList);
    dynamicList = newList(10);
    displayList(dynamicList);
    checker = insertFront(&dynamicList, 50);
    (checker) ? displayList(dynamicList) : printf("Something went wrong or the array is full\n");
    checker = insertFront(&dynamicList, 6);
    (checker) ? displayList(dynamicList) : printf("Something went wrong or the array is full\n");
    checker = insertFront(&dynamicList, 7);
    (checker) ? displayList(dynamicList) : printf("Something went wrong or the array is full\n");
    checker = insertFront(&dynamicList, 8);
    (checker) ? displayList(dynamicList) : printf("Something went wrong or the array is full\n");
    checker = insertRear(&dynamicList, 50);
    (checker) ? displayList(dynamicList) : printf("Something went wrong or the array is full\n");
    checker = insertRear(&dynamicList, 10);
    (checker) ? displayList(dynamicList) : printf("Something went wrong or the array is full\n");
    checker = insertRear(&dynamicList, 11);
    (checker) ? displayList(dynamicList) : printf("Something went wrong or the array is full\n");
    checker = insertAt(&dynamicList, 30, 3);
    (checker) ? displayList(dynamicList) : printf("Something went wrong, the array is full or invalid location\n");
    checker = insertRear(&dynamicList, 8);
    (checker) ? displayList(dynamicList) : printf("Something went wrong or the array is full\n");
    checker = insertRear(&dynamicList, 4);
    (checker) ? displayList(dynamicList) : printf("Something went wrong or the array is full\n");
    checker = searchItem(dynamicList, 50);
    (checker) ? printf("Key Found\n") : printf("Key not found\n");
    key = deleteAllItem(&dynamicList, 50);
    if(key != -1) {
    	printf("Successfully Removed All Keys: %d\n", key);
    	displayList(dynamicList);
	}else {
		printf("Something went wrong, the array is empty or key not found\n");
	}
    i = getItem(dynamicList, 10);
    (i == -1) ? printf("Key not Found\n") : printf("Key Retrieved: %d\n", i);
    checker = deleteFront(&dynamicList);
    if(checker) {
    	printf("Successfully Removed Front\n");
    	displayList(dynamicList);
	}else {
		printf("Something went wrong or the array is empty\n");
	}
	checker = deleteRear(&dynamicList);
    if(checker) {
    	printf("Successfully Removed Rear\n");
    	displayList(dynamicList);
	}else {
		printf("Something went wrong or the array is empty\n");
	}
	checker = deleteAt(&dynamicList, 1);
    if(checker) {
    	printf("Successfully Removed\n");
    	displayList(dynamicList);
	}else {
		printf("Something went wrong or the array is empty\n");
	}
	checker = deleteItem(&dynamicList, 6);
    if(checker) {
    	printf("Successfully Removed\n");
    	displayList(dynamicList);
	}else {
		printf("Something went wrong, the array is empty or key not found\n");
	};
    
	return 0;
}
