#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "StaticArray.h"

void initList(List *list);
List newList();
void displayList(List list);
bool insertFront(List *list, DATA item);
bool insertRear(List *list, DATA item);
bool insertSorted(List *list, DATA item);
bool insertAt(List *list, DATA item, int loc);
bool searchItem(List list, DATA key);
int getItem(List list, DATA key);
bool deleteFront(List *list);
bool deleteRear(List *list);
int deleteAt(List *list, int loc);
bool deleteItem(List *list, DATA key);
int deleteAllItem(List *list, DATA key);

//Uncomment if you're using static, comment out if you're using dynamic
//void initList(List *list) {
//	list->count = 0;
//};
//
//List newList(){
//	List list;
//	
//	list.count = 0;
//	
//	return list;
//};
//
//void displayList(List list) {
//	int i = 0;
//	
//	if(list.count){
//		while(i < list.count) {
//    		printf("The contents of staticList: %d\n", list.elems[i++]);
//		};
//	}
//
//    printf("The length of List: %d\n", list.count);
//};
//
//bool insertFront(List *list, DATA item){
//	if(list->count){
//		if(list->count != MAX){
//			int i;
//			
//			for(i = list->count; i > 0; i--){
//				list->elems[i] = list->elems[i-1]; 
//			}
//			
//			list->elems[0] = item;
//			list->count++;
//			return true;
//		}
//	}else {
//		list->elems[list->count++] = item;
//		return true;
//	}
//	
//	return false;
//};
//
//bool insertRear(List *list, DATA item){
//	if(list->count != MAX){			
//		list->elems[list->count++] = item;
//		return true;
//	}
//	
//	return false;
//};
//
//bool insertSorted(List *list, DATA item){
//	if(list->count){
//		if(list->count == MAX) return false;
//		int i, o;
//		
//		for(i = 0; i < list->count && list->elems[i] < item; i++){}
//		
//		for(o = list->count; o > i; o--){
//				list->elems[o] = list->elems[o-1];
//		}
//		
//		list->elems[i] = item;
//		list->count++;
//	}else {
//		list->elems[list->count++] = item;
//	}
//	
//	return true;
//};
//
//bool insertAt(List *list, DATA item, int loc){
//	if(list->count){
//		if(list->count != MAX && loc <= list->count){
//			if(loc == list->count) {
//				list->elems[list->count++] = item;
//			}else {
//				int i;
//			
//				for(i = list->count; i > loc - 1; i--){
//					list->elems[i] = list->elems[i-1]; 
//				};
//				
//				list->elems[loc - 1] = item;
//				list->count++;
//			}
//			
//			return true;
//		}
//	}else {
//		list->elems[list->count++] = item;
//		return true;
//	};
//	
//	return false;
//};
//
//bool searchItem(List list, DATA key){
//	int i;
//	for (i = 0; i < list.count; i++){
//		if(list.elems[i] == key) {
//			return true;
//		}
//	}
//	
//	return false;
//};
//
//int getItem(List list, DATA key){
//	int i;
//	for (i = 0; i < list.count; i++){
//		if(list.elems[i] == key) {
//			return list.elems[i];
//		}
//	}
//	
//	return -1;
//};
//
//bool deleteFront(List *list){
//	if(list->count){
//		int i;
//			
//		for(i = 0; i < list->count; i++){
//			list->elems[i] = list->elems[i+1]; 
//		}
//			
//		list->count--;
//		return true;
//	}
//
//	return false;
//};
//
//bool deleteRear(List *list){
//	if(list->count){			
//		list->count--;
//		return true;
//	}
//	
//	return false;
//};
//
//int deleteAt(List *list, int loc){
//	if(list->count){
//		if(loc <= list->count){
//			if(loc == list->count) {
//				deleteRear(list);
//			}else {
//				int i;
//			
//				for(i = loc; i < list->count; i++){
//					list->elems[i] = list->elems[i+1]; 
//				}
//				
//				list->count--;
//			}
//			
//			return true;
//		}
//	}
//	
//	return false;
//};
//
//bool deleteItem(List *list, DATA key){
//	if(list->count){
//		int i, x;
//			
//		for(i = 0; i < list->count; i++){
//			if(list->elems[i] == key){
//				if(i == (list->count - 1)){
//					deleteRear(&(*list));
//				}else {	
//					for(x = i; x < list->count; x++){
//						list->elems[x] = list->elems[x+1]; 
//					}
//					
//					list->count--;
//					return true;
//				}
//			}
//		}
//	}
//	
//	return false;
//};
//
//int deleteAllItem(List *list, DATA key){
//	int i, checker = list->count;
//	if(list->count) {
//		int o;
//		
//		for(i = 0; i < list->count; i++){
//			if(list->elems[i] == key){
//				if(i != list->count - 1){
//					for(o = i; o < list->count; o++){
//						list->elems[o] = list->elems[o+1]; 
//					}
//				}
//				list->count--;
//			}
//		}
//	}else key = -1;
//
//	return (checker != list->count) ? key : -1;
//};
